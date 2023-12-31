/**
 * \file rbc_qre.c
 * \brief Implementation of rbc_qre.h
 */

#include "rbc_elt.h"
#include "rbc_qre.h"
#include "rbc_poly.h"

static uint32_t RBC_QRE_DEG;
static int rbc_init_qre_modulus = 0;
static rbc_poly_sparse rbc_qre_modulus;
static rbc_poly rbc_qre_modulus_inv;

{TEMPLATING_RBC_QRE_INIT_MODULUS}
{TEMPLATING_RBC_QRE_CLEAR_MODULUS}
{TEMPLATING_RBC_QRE_GET_MODULUS}
{TEMPLATING_RBC_QRE_INIT}
{TEMPLATING_RBC_QRE_CLEAR}
{TEMPLATING_RBC_QRE_SET_ZERO}
{TEMPLATING_RBC_QRE_SET_RANDOM}
{TEMPLATING_RBC_QRE_SET_RANDOM_FULL_RANK}
{TEMPLATING_RBC_QRE_SET_RANDOM_FULL_RANK_WITH_ONE}
{TEMPLATING_RBC_QRE_SET_RANDOM_FROM_SUPPORT}
{TEMPLATING_RBC_QRE_SET_RANDOM_PAIR_FROM_SUPPORT}
{TEMPLATING_RBC_QRE_IS_EQUAL_TO}
{TEMPLATING_RBC_QRE_ADD}
{TEMPLATING_RBC_QRE_MUL}
{TEMPLATING_RBC_QRE_INV}
{TEMPLATING_RBC_QRE_TO_STRING}
{TEMPLATING_RBC_QRE_FROM_STRING}
{TEMPLATING_RBC_QRE_PRINT}
