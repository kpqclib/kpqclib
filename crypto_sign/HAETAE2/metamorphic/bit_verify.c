#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <memory.h>
#include <stdbool.h>
#include <assert.h>

#include "fips202.h"
#include "packing.h"
#include "polydbl.h"
#include "polyvec.h"
#include "randombytes.h"
#include "reduce.h"
#include "rounding.h"
#include "sign.h"

#include "bit_verify.h"

#define BIT_VERIFY_SUCCESS          0
#define BIT_VERIFY_FAIL             -1


int KPQCLEAN_METAMORPHIC_bit_verify_test_kem(
    const size_t pklen, const size_t sklen, const size_t keylen,
    const size_t mlen, const size_t clen, const size_t kem_siglen, char* ALGNAME) 
{
    uint8_t* pk;
    uint8_t* sk;
    uint8_t* m = NULL;
    uint8_t* sig = NULL;
    uint8_t* sig2 = NULL;
    uint8_t* buf = NULL;
    size_t siglen = 0;
    size_t siglen2 = 0;
    bool flag = true;
    int param = 0;

    
    pk   = (uint8_t*)calloc(pklen,   sizeof(uint8_t));
    sk   = (uint8_t*)calloc(sklen,   sizeof(uint8_t));
    m    = (uint8_t*)calloc(mlen,   sizeof(uint8_t));
    sig  = (uint8_t*)calloc(kem_siglen, sizeof(uint8_t));
    sig2 = (uint8_t*)calloc(kem_siglen, sizeof(uint8_t));
    
    assert(pk   != NULL);
    assert(sk   != NULL);
    assert(m    != NULL);
    assert(sig  != NULL);
    assert(sig2 != NULL);
    // set message with pseudorandom bytes
    for(int i = 0; i < mlen; i++){
        m[i] = rand() & 0xff;
    }

    crypto_sign_keypair(pk, sk);
    crypto_sign_signature(sig, &siglen, m, mlen, sk);

    buf  = (uint8_t*)calloc(siglen,   sizeof(uint8_t));
    assert(buf != NULL);
    for(int i = 0; i < siglen * 8; i++){
        memcpy(buf, sig, siglen);
        buf[i/8] ^= 1 << (i % 8);

        int ret = crypto_sign_verify(buf, siglen, m, mlen, sk);

        if(ret == 0) {
            printf("%s Bit Verify Test Failed: Failed on messaage\n", ALGNAME);
            // for(int idx = 0; idx < siglen; idx++){
            //     printf("%02x ", sig[idx]);
            // }printf("\n");
            printf("siglen: %d", siglen);
            flag = false;
            goto EXIT;
        }
    }


EXIT:
    free(m   );
    free(sig );
    free(sig2);
    free(buf );

    if(flag){
        printf("%s Bit Verify Test Success\n", ALGNAME);
        return BIT_VERIFY_SUCCESS;
    } else{
        return BIT_VERIFY_FAIL;
    }    

}
