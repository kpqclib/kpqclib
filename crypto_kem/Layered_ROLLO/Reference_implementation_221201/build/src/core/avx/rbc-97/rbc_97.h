#ifndef RBC_97_H
#define RBC_97_H

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <x86intrin.h>

#define RBC_97_FIELD_Q 2
#define RBC_97_FIELD_M 97

#define RBC_97_ELT_SIZE 2
#define RBC_97_ELT_DATA_SIZE 2

#define RBC_97_ELT_UR_SIZE 4
#define RBC_97_ELT_UR_DATA_SIZE 4

#define RBC_97_ELT_UINT8_SIZE 13
#define RBC_97_ELT_UR_UINT8_SIZE 25


#define RBC_97_INTEGER_LENGTH 64

typedef int64_t rbc_97_elt_int;
typedef uint64_t rbc_97_elt_uint;
typedef uint64_t rbc_97_elt[RBC_97_ELT_SIZE];
typedef uint64_t rbc_97_elt_ur[RBC_97_ELT_UR_SIZE];
typedef uint64_t* rbc_97_elt_ptr;

typedef rbc_97_elt* rbc_97_vec;
typedef rbc_97_elt* rbc_97_vspace;

typedef struct {
  rbc_97_vec v;
  int32_t max_degree;
  // Do not use degree, it is deprecated and will be removed later
  // Kept temporarily for compatibility with rbc_97_qpoly
  int32_t degree;
} rbc_97_poly_struct;

typedef struct {
	 uint32_t coeffs_nb;
	 uint32_t* coeffs;
} rbc_97_poly_sparse_struct;

typedef rbc_97_poly_struct* rbc_97_poly;
typedef rbc_97_poly_sparse_struct* rbc_97_poly_sparse;

typedef rbc_97_poly rbc_97_qre;

void rbc_97_field_init();
static const __m128i RBC_97_ELT_SQR_MASK_128 = {0x0F0F0F0F0F0F0F0F, 0x0F0F0F0F0F0F0F0F};
static const __m128i RBC_97_ELT_SQR_LOOKUP_TABLE_128 = {0x1514111005040100, 0x5554515045444140};
static const rbc_97_elt RBC_97_ELT_MODULUS = {0x0000000000000041, 0x0000000200000000};

#ifndef min
  #define min(a,b) (((a)<(b))?(a):(b))
#endif

#ifndef max
  #define max(a,b) (((a)>(b))?(a):(b))
#endif

#endif
