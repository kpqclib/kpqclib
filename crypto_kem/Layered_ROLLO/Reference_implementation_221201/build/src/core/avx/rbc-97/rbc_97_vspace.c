/**
 * \file rbc_97_vspace.c
 * \brief Implementation of rbc_97_vspace.h
 */

#include "rbc_97.h"
#include "rbc_97_vspace.h"
#include "rbc_97_vec.h"




/**
 * \fn void rbc_97_vspace_init(rbc_97_vspace* vs, uint32_t size)
 * \brief This function allocates the memory for a rbc_97_vspace.
 *
 * \param[out] vs Pointer to the allocated rbc_97_vspace
 * \param[in] size Size of the rbc_97_vspace
 */
void rbc_97_vspace_init(rbc_97_vspace* vs, uint32_t size) {
  rbc_97_vec_init(vs, size);
}




/**
 * \fn void rbc_97_vspace_clear(rbc_97_vspace vs)
 * \brief This functions clears the memory allocated to a rbc_97_vspace.
 *
 * \param[in] v rbc_97_vspace
 * \param[in] size Size of the rbc_97_vspace
 */
void rbc_97_vspace_clear(rbc_97_vspace vs) {
  rbc_97_vec_clear(vs);
}




/**
 * \fn void rbc_97_vspace_set(rbc_97_vspace o, const rbc_97_vspace vs, uint32_t size)
 * \brief This function copies a rbc_97_vspace to another one.
 *
 * \param[out] o rbc_97_vspace
 * \param[in] vs rbc_97_vspace
 * \param[in] size Size of the rbc_97_vspaces
 */
void rbc_97_vspace_set(rbc_97_vspace o, const rbc_97_vspace vs, uint32_t size) {
  rbc_97_vec_set(o, vs, size);
}




/**
 * \fn void rbc_97_vspace_set_zero(rbc_97_vspace o, uint32_t size)
 * \brief This function sets a rbc_97_vspace to zero.
 *
 * \param[out] o rbc_97_vspace
 * \param[in] size Size of the rbc_97_vspace
 */
void rbc_97_vspace_set_zero(rbc_97_vspace o, uint32_t size) {
  rbc_97_vec_set_zero(o, size);
}




/** 
 * \fn void rbc_97_vspace_set_random_full_rank(random_source* ctx, rbc_97_vspace o, uint32_t size)
 * \brief This function sets a vector space with random values using the NIST seed expander. The returned vector space has full rank.
 *
 * \param[out] ctx random_source
 * \param[out] o rbc_97_vspace
 * \param[in] size Size of the rbc_97_vspace
 */
void rbc_97_vspace_set_random_full_rank(random_source* ctx, rbc_97_vspace o, uint32_t size) {
  rbc_97_vec_set_random_full_rank(ctx, o, size);
}




/**
 * \fn void rbc_97_vspace_set_random_full_rank_with_one(random_source* ctx, rbc_97_vspace o, uint32_t size) {
 * \brief This function sets a rbc_97_vspace with random values using the NIST seed expander. The rbc_97_vspace returned by this function has full rank and contains one.
 *
 * \param[out] ctx random source
 * \param[out] o rbc_97_vspace
 * \param[in] size Size of rbc_97_vspace
 */
void rbc_97_vspace_set_random_full_rank_with_one(random_source* ctx, rbc_97_vspace o, uint32_t size) {
  rbc_97_vec_set_random_full_rank_with_one(ctx, o, size);
}




/**
 * \fn void rbc_97_vspace_direct_sum(rbc_97_vspace o, const rbc_97_vspace vs1, const rbc_97_vspace vs2, uint32_t vs1_size, uint32_t vs2_size)
 * \brief This function computes the direct sum of two vector spaces.
 *
 * \param[out] o Direct sum of vs1 and vs2
 * \param[in] vs1 rbc_97_vspace
 * \param[in] vs2 rbc_97_vspace
 * \param[in] vs1_size Size of vs1
 * \param[in] vs2_size Size of vs2
 */
void rbc_97_vspace_direct_sum(rbc_97_vspace o, const rbc_97_vspace vs1, const rbc_97_vspace vs2, uint32_t vs1_size, uint32_t vs2_size) {
  for(size_t i = 0; i < vs1_size; i++) {
    rbc_97_elt_set(o[i], vs1[i]);
  }

  for(size_t i = 0; i < vs2_size; i++) {
    rbc_97_elt_set(o[i + vs1_size], vs2[i]);
  }
}




/**
 * \fn uint32_t rbc_97_vspace_intersection(rbc_97_vspace o, const rbc_97_vspace vs1, const rbc_97_vspace vs2, uint32_t vs1_size, uint32_t vs2_size)
 * \brief This function computes the intersection of vs1 and vs2.
 *
 * \param[out] o Intersection of vs1 and vs2
 * \param[in] vs1 rbc_97_vspace
 * \param[in] vs2 rbc_97_vspace
 * \param[in] vs1_size Size of vs1
 * \param[in] vs2_size Size of vs2
 *
 * \return Dimension of o
 */
uint32_t rbc_97_vspace_intersection(rbc_97_vspace o, const rbc_97_vspace vs1, const rbc_97_vspace vs2, uint32_t vs1_size, uint32_t vs2_size) {
  if(vs1_size == 0 || vs2_size == 0) {
    return 0;
  }

  rbc_97_vspace direct_sum;
  rbc_97_vspace result;  
  int32_t inter_dim;
  int32_t trailing_zeros = 0;

  // Initialization
  rbc_97_vspace_init(&direct_sum, vs1_size + vs2_size);
  rbc_97_vspace_init(&result, vs1_size + vs2_size);

  rbc_97_vspace_direct_sum(direct_sum, vs1, vs2, vs1_size, vs2_size);
  rbc_97_vspace_set(result, vs1, vs1_size);

  // Perform Gauss on direct_sum and repeat operations on result
  int dimension = rbc_97_vec_gauss(direct_sum, vs1_size + vs2_size, &result, 1);

  inter_dim = vs1_size + vs2_size - dimension;
  rbc_97_vspace_set_zero(o, max(vs1_size, vs2_size));
  
  for(uint32_t i =  vs1_size + vs2_size - 1 ; i >= vs1_size + vs2_size - inter_dim ; i--) {
    if(rbc_97_elt_is_zero(result[i])) trailing_zeros++;
  }

  inter_dim -= trailing_zeros;

  for(int32_t i = 0 ; i < inter_dim ; i++) {
    rbc_97_elt_set(o[i], result[dimension + i]);
  }

  rbc_97_vspace_clear(direct_sum);
  rbc_97_vspace_clear(result);

  return inter_dim;
}



/**
 * \fn uint32_t rbc_97_vspace_intersection(rbc_97_vspace o, const rbc_97_vspace vs1, const rbc_97_vspace vs2, uint32_t vs1_size, uint32_t vs2_size)
 * \brief This function computes the intersection of vs1 and vs2.
 *
 * \param[out] o Intersection of vs1 and vs2
 * \param[in] vs1 rbc_97_vspace
 * \param[in] vs2 rbc_97_vspace
 * \param[in] vs1_size Size of vs1
 * \param[in] vs2_size Size of vs2
 *
 * \return Dimension of o
 */
uint32_t rbc_97_vspace_intersection_vartime(rbc_97_vspace o, const rbc_97_vspace vs1, const rbc_97_vspace vs2, uint32_t vs1_size, uint32_t vs2_size) {
  if(vs1_size == 0 || vs2_size == 0) {
    return 0;
  }

  rbc_97_vspace direct_sum;
  rbc_97_vspace result;  
  int32_t inter_dim;
  int32_t trailing_zeros = 0;

  // Initialization
  rbc_97_vspace_init(&direct_sum, vs1_size + vs2_size);
  rbc_97_vspace_init(&result, vs1_size + vs2_size);

  rbc_97_vspace_direct_sum(direct_sum, vs1, vs2, vs1_size, vs2_size);
  rbc_97_vspace_set(result, vs1, vs1_size);

  // Perform Gauss on direct_sum and repeat operations on result
  int dimension = rbc_97_vec_gauss_vartime(direct_sum, vs1_size + vs2_size, &result, 1);

  inter_dim = vs1_size + vs2_size - dimension;
  rbc_97_vspace_set_zero(o, max(vs1_size, vs2_size));  

  for(uint32_t i =  vs1_size + vs2_size - 1 ; i >= vs1_size + vs2_size - inter_dim ; i--) {
    if(rbc_97_elt_is_zero(result[i])) trailing_zeros++;
  }

  inter_dim -= trailing_zeros;

  for(int32_t i = 0 ; i < inter_dim ; i++) {
    rbc_97_elt_set(o[i], result[dimension + i]);
  }

  rbc_97_vspace_clear(direct_sum);
  rbc_97_vspace_clear(result);

  return inter_dim;
}




/**
 * \fn void rbc_97_vspace_product(rbc_97_vspace o, const rbc_97_vspace vs1, const rbc_97_vspace vs2, uint32_t vs1_size, uint32_t vs2_size)
 * \brief This function computes the product vector space of a and b.
 *
 * \param[out] o Product vector space
 * \param[in] vs1 rbc_97_vspace
 * \param[in] vs2 rbc_97_vspace
 * \param[in] vs1_size Size of a
 * \param[in] vs2_size Size of b
 */
void rbc_97_vspace_product(rbc_97_vspace o, const rbc_97_vspace vs1, const rbc_97_vspace vs2, uint32_t vs1_size, uint32_t vs2_size) {
  for(size_t i = 0 ; i < vs1_size ; i++) {
    for(size_t j = 0 ; j < vs2_size ; j++) {
      rbc_97_elt_mul(o[i * vs2_size + j], vs1[i], vs2[j]);
    }
  }
}




/**
 * \fn void rbc_97_vspace_print(const rbc_97_vspace vs, uint32_t size)
 * \brief This function displays a rbc_97_vspace.
 *
 * \param[in] vs rbc_97_vspace
 * \param[in] size Size of the rbc_97_vspace
 */
void rbc_97_vspace_print(const rbc_97_vspace vs, uint32_t size) {
  rbc_97_vec_print(vs, size);
}

