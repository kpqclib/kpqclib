/**
 * \file rbc_97_poly.h
 * \brief Interface for polynomials over a finite field
 */

#ifndef RBC_97_POLY_H
#define RBC_97_POLY_H

#include "rbc_97.h"
#include "rbc_97_vspace.h"
#include "random_source.h"

void rbc_97_poly_init(rbc_97_poly* p, int32_t degree);

void rbc_97_poly_clear(rbc_97_poly p);

void rbc_97_poly_sparse_init(rbc_97_poly_sparse* p, uint32_t coeff_nb, uint32_t *coeffs);

void rbc_97_poly_sparse_clear(rbc_97_poly_sparse p);

void rbc_97_poly_set_zero(rbc_97_poly o, int32_t degree);

void rbc_97_poly_set(rbc_97_poly o, const rbc_97_poly p);

void rbc_97_poly_set_random(random_source* ctx, rbc_97_poly o, int32_t degree);

void rbc_97_poly_set_random_full_rank(random_source* ctx, rbc_97_poly o, int32_t degree);

void rbc_97_poly_set_random_full_rank_with_one(random_source* ctx, rbc_97_poly o, int32_t degree);

void rbc_97_poly_set_random_from_support(random_source* ctx, rbc_97_poly o, int32_t degree, const rbc_97_vspace support, uint32_t support_size, uint8_t copy_flag);

void rbc_97_poly_set_random_pair_from_support(random_source* ctx, rbc_97_poly o1, rbc_97_poly o2, int32_t degree, const rbc_97_vspace support, uint32_t support_size, uint8_t copy_flag);

uint8_t rbc_97_poly_is_equal_to(const rbc_97_poly p1, const rbc_97_poly p2);

void rbc_97_poly_add(rbc_97_poly o, const rbc_97_poly p1, const rbc_97_poly p2);

void rbc_97_poly_mul(rbc_97_poly o, const rbc_97_poly p1, const rbc_97_poly p2);
void rbc_97_poly_mul2(rbc_97_poly o, const rbc_97_poly p1, const rbc_97_poly p2, int32_t p1_degree, int32_t p2_degree);

void rbc_97_poly_mulmod_sparse(rbc_97_poly o, const rbc_97_poly p1, const rbc_97_poly p2, const rbc_97_poly_sparse modulus);

void rbc_97_poly_inv(rbc_97_poly o, const rbc_97_poly p, const rbc_97_poly modulus);

void rbc_97_poly_to_string(uint8_t* str, const rbc_97_poly p);

void rbc_97_poly_from_string(rbc_97_poly p, const uint8_t* str);


void rbc_97_poly_print(const rbc_97_poly p);

void rbc_97_poly_sparse_print(const rbc_97_poly_sparse p);

#endif

