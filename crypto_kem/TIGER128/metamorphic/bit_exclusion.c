#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <memory.h>
#include <assert.h>

#include "TIGER_CPAPKE.h"
#include "TIGER_CCAKEM.h"
#include "fips202.h"
#include "rng.h"
#include "params.h"

#include "bit_exclusion.h"


int KPQCLEAN_METAMORPHIC_bit_exclusion_test_kem(
    const size_t pklen, const size_t sklen, const size_t keylen,
    const size_t mlen, const size_t clen, const size_t crypto_bytes, char* ALGNAME)
{
    uint8_t* pk     = NULL;
    uint8_t* sk     = NULL;
    uint8_t* buf    = NULL;
    uint8_t* m      = NULL;
    uint8_t* c      = NULL;
    uint8_t* c2     = NULL;
    uint8_t* ss     = NULL;
    uint8_t* ss1    = NULL;
    uint8_t* ss2    = NULL;
    uint8_t* k2     = NULL; // may not used depend on alg.
    uint8_t* dec1   = NULL;
    bool flag = true;

    pk  = (uint8_t*)calloc(pklen,                       sizeof(uint8_t));
    sk  = (uint8_t*)calloc(sklen,                       sizeof(uint8_t));
    buf = (uint8_t*)calloc(sklen + EXCLUSION_BYTELEN,   sizeof(uint8_t));
    m   = (uint8_t*)calloc(mlen,                        sizeof(uint8_t));
    c   = (uint8_t*)calloc(clen,                        sizeof(uint8_t));
    c2  = (uint8_t*)calloc(clen,                        sizeof(uint8_t));
    ss  = (uint8_t*)calloc(crypto_bytes,                sizeof(uint8_t));
    ss1 = (uint8_t*)calloc(crypto_bytes,                sizeof(uint8_t));
    ss2 = (uint8_t*)calloc(crypto_bytes,                sizeof(uint8_t));
    k2  = (uint8_t*)calloc(keylen,                      sizeof(uint8_t));

    assert(pk   != NULL);
    assert(sk   != NULL);
    assert(buf  != NULL);
    assert(m    != NULL);
    assert(c    != NULL);
    assert(ss   != NULL);
    assert(k2   != NULL);

    // Generate keypair
    KEM_Keygen(pk, sk);

    // Encapsulation
    KEM_Enc(c, ss, pk);

    for(int j = 0; j < EXCLUSION_BYTELEN * 8; j++){
    memcpy(buf, sk, sklen);
        buf[sklen + j/8] ^= 1 << (j%8);

        KEM_dec(ss1, c, sk,  pk);
        KEM_dec(ss2, c, buf, pk);

        if(memcmp(ss1, ss2, crypto_bytes) == 0){
            continue;
        } else {
            printf("%s Bit Exclusion Test Fail: Failed on sk\n", ALGNAME);
            flag = false;
            goto EXIT;
        }
    }

    free(buf);
    buf = (uint8_t*)calloc(clen + EXCLUSION_BYTELEN, sizeof(uint8_t));
    for(int j = 0; j < EXCLUSION_BYTELEN * 8; j++){
    memcpy(buf, c, clen);
        buf[clen + j/8] ^= 1 << (j%8);

        KEM_dec(ss1, c, sk, pk);
        KEM_dec(ss2, buf, sk, pk);

        if(memcmp(ss1, ss2, crypto_bytes) == 0){
            continue;
        } else {
            printf("%s Bit Exclusion Test Fail: Failed on ct\n", ALGNAME);
            flag = false;
            goto EXIT;
        }
    }


EXIT:
    free(pk ); 
    free(sk ); 
    free(buf); 
    free(m  ); 
    free(c  ); 
    free(ss ); 
    free(ss1); 
    free(ss2); 
    free(k2 ); 

    if(flag){
        printf("%s Bit Exclusion Test Success\n", ALGNAME);
        return BIT_EXCLUSION_SUCCESS;
    } else{
        return BIT_EXCLUSION_FAIL;
    }
}