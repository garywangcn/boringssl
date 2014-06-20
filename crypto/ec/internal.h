/* Originally written by Bodo Moeller for the OpenSSL project.
 * ====================================================================
 * Copyright (c) 1998-2005 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.openssl.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@openssl.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.openssl.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */
/* ====================================================================
 * Copyright 2002 Sun Microsystems, Inc. ALL RIGHTS RESERVED.
 *
 * Portions of the attached software ("Contribution") are developed by
 * SUN MICROSYSTEMS, INC., and are contributed to the OpenSSL project.
 *
 * The Contribution is licensed pursuant to the OpenSSL open source
 * license provided above.
 *
 * The elliptic curve binary polynomial software is originally written by
 * Sheueling Chang Shantz and Douglas Stebila of Sun Microsystems
 * Laboratories. */

#ifndef OPENSSL_HEADER_EC_INTERNAL_H
#define OPENSSL_HEADER_EC_INTERNAL_H

#include <openssl/base.h>

#include <openssl/bn.h>
#include <openssl/ex_data.h>

#if defined(__cplusplus)
extern "C" {
#endif


/* Use default functions for poin2oct, oct2point and compressed coordinates */
#define EC_FLAGS_DEFAULT_OCT 0x1

typedef struct ec_method_st EC_METHOD;

struct ec_method_st {
  /* Various method flags */
  int flags;

  /* used by EC_GROUP_new, EC_GROUP_free, EC_GROUP_clear_free, EC_GROUP_copy: */
  int (*group_init)(EC_GROUP *);
  void (*group_finish)(EC_GROUP *);
  void (*group_clear_finish)(EC_GROUP *);
  int (*group_copy)(EC_GROUP *, const EC_GROUP *);

  /* used by EC_GROUP_set_curve_GFp, EC_GROUP_get_curve_GFp, */
  /* EC_GROUP_set_curve_GF2m, and EC_GROUP_get_curve_GF2m: */
  int (*group_set_curve)(EC_GROUP *, const BIGNUM *p, const BIGNUM *a,
                         const BIGNUM *b, BN_CTX *);
  int (*group_get_curve)(const EC_GROUP *, BIGNUM *p, BIGNUM *a, BIGNUM *b,
                         BN_CTX *);

  /* used by EC_GROUP_get_degree: */
  int (*group_get_degree)(const EC_GROUP *);

  /* used by EC_GROUP_check: */
  int (*group_check_discriminant)(const EC_GROUP *, BN_CTX *);

  /* used by EC_POINT_new, EC_POINT_free, EC_POINT_clear_free, EC_POINT_copy: */
  int (*point_init)(EC_POINT *);
  void (*point_finish)(EC_POINT *);
  void (*point_clear_finish)(EC_POINT *);
  int (*point_copy)(EC_POINT *, const EC_POINT *);

  /* used by EC_POINT_set_to_infinity,
   * EC_POINT_set_Jprojective_coordinates_GFp,
   * EC_POINT_get_Jprojective_coordinates_GFp,
   * EC_POINT_set_affine_coordinates_GFp,     ..._GF2m,
   * EC_POINT_get_affine_coordinates_GFp,     ..._GF2m,
   * EC_POINT_set_compressed_coordinates_GFp, ..._GF2m:
   */
  int (*point_set_to_infinity)(const EC_GROUP *, EC_POINT *);
  int (*point_set_Jprojective_coordinates_GFp)(const EC_GROUP *, EC_POINT *,
                                               const BIGNUM *x, const BIGNUM *y,
                                               const BIGNUM *z, BN_CTX *);
  int (*point_get_Jprojective_coordinates_GFp)(const EC_GROUP *,
                                               const EC_POINT *, BIGNUM *x,
                                               BIGNUM *y, BIGNUM *z, BN_CTX *);
  int (*point_set_affine_coordinates)(const EC_GROUP *, EC_POINT *,
                                      const BIGNUM *x, const BIGNUM *y,
                                      BN_CTX *);
  int (*point_get_affine_coordinates)(const EC_GROUP *, const EC_POINT *,
                                      BIGNUM *x, BIGNUM *y, BN_CTX *);
  int (*point_set_compressed_coordinates)(const EC_GROUP *, EC_POINT *,
                                          const BIGNUM *x, int y_bit, BN_CTX *);

  /* used by EC_POINT_point2oct, EC_POINT_oct2point: */
  size_t (*point2oct)(const EC_GROUP *, const EC_POINT *,
                      point_conversion_form_t form, unsigned char *buf,
                      size_t len, BN_CTX *);
  int (*oct2point)(const EC_GROUP *, EC_POINT *, const unsigned char *buf,
                   size_t len, BN_CTX *);

  /* used by EC_POINT_add, EC_POINT_dbl, ECP_POINT_invert: */
  int (*add)(const EC_GROUP *, EC_POINT *r, const EC_POINT *a,
             const EC_POINT *b, BN_CTX *);
  int (*dbl)(const EC_GROUP *, EC_POINT *r, const EC_POINT *a, BN_CTX *);
  int (*invert)(const EC_GROUP *, EC_POINT *, BN_CTX *);

  /* used by EC_POINT_is_at_infinity, EC_POINT_is_on_curve, EC_POINT_cmp: */
  int (*is_at_infinity)(const EC_GROUP *, const EC_POINT *);
  int (*is_on_curve)(const EC_GROUP *, const EC_POINT *, BN_CTX *);
  int (*point_cmp)(const EC_GROUP *, const EC_POINT *a, const EC_POINT *b,
                   BN_CTX *);

  /* used by EC_POINT_make_affine, EC_POINTs_make_affine: */
  int (*make_affine)(const EC_GROUP *, EC_POINT *, BN_CTX *);
  int (*points_make_affine)(const EC_GROUP *, size_t num, EC_POINT * [],
                            BN_CTX *);

  /* used by EC_POINTs_mul, EC_POINT_mul, EC_POINT_precompute_mult,
   * EC_POINT_have_precompute_mult
   * (default implementations are used if the 'mul' pointer is 0): */
  int (*mul)(const EC_GROUP *group, EC_POINT *r, const BIGNUM *scalar,
             size_t num, const EC_POINT *points[], const BIGNUM *scalars[],
             BN_CTX *);
  int (*precompute_mult)(EC_GROUP *group, BN_CTX *);
  int (*have_precompute_mult)(const EC_GROUP *group);


  /* internal functions */

  /* 'field_mul', 'field_sqr', and 'field_div' can be used by 'add' and 'dbl'
   * so that the same implementations of point operations can be used with
   * different optimized implementations of expensive field operations: */
  int (*field_mul)(const EC_GROUP *, BIGNUM *r, const BIGNUM *a,
                   const BIGNUM *b, BN_CTX *);
  int (*field_sqr)(const EC_GROUP *, BIGNUM *r, const BIGNUM *a, BN_CTX *);
  int (*field_div)(const EC_GROUP *, BIGNUM *r, const BIGNUM *a,
                   const BIGNUM *b, BN_CTX *);

  int (*field_encode)(const EC_GROUP *, BIGNUM *r, const BIGNUM *a,
                      BN_CTX *); /* e.g. to Montgomery */
  int (*field_decode)(const EC_GROUP *, BIGNUM *r, const BIGNUM *a,
                      BN_CTX *); /* e.g. from Montgomery */
  int (*field_set_to_one)(const EC_GROUP *, BIGNUM *r, BN_CTX *);
} /* EC_METHOD */;

const EC_METHOD* EC_GFp_mont_method();

struct ec_pre_comp_st;
void ec_pre_comp_free(struct ec_pre_comp_st *pre_comp);
void *ec_pre_comp_dup(struct ec_pre_comp_st *pre_comp);

struct ec_group_st {
  const EC_METHOD *meth;

  EC_POINT *generator; /* optional */
  BIGNUM order, cofactor;

  int curve_name; /* optional NID for named curve */
  point_conversion_form_t asn1_form;

  struct ec_pre_comp_st *pre_comp;

  /* The following members are handled by the method functions,
   * even if they appear generic */

  BIGNUM field; /* Field specification.
                 * For curves over GF(p), this is the modulus;
                 * for curves over GF(2^m), this is the
                 * irreducible polynomial defining the field. */

  int poly[6]; /* Field specification for curves over GF(2^m).
                * The irreducible f(t) is then of the form:
                *     t^poly[0] + t^poly[1] + ... + t^poly[k]
                * where m = poly[0] > poly[1] > ... > poly[k] = 0.
                * The array is terminated with poly[k+1]=-1.
                * All elliptic curve irreducibles have at most 5
                * non-zero terms. */

  BIGNUM a, b; /* Curve coefficients.
                * (Here the assumption is that BIGNUMs can be used
                * or abused for all kinds of fields, not just GF(p).)
                * For characteristic  > 3,  the curve is defined
                * by a Weierstrass equation of the form
                *     y^2 = x^3 + a*x + b.
                * For characteristic  2,  the curve is defined by
                * an equation of the form
                *     y^2 + x*y = x^3 + a*x^2 + b. */

  int a_is_minus3; /* enable optimized point arithmetics for special case */

  void *field_data1; /* method-specific (e.g., Montgomery structure) */
  void *field_data2; /* method-specific */
  int (*field_mod_func)(BIGNUM *, const BIGNUM *, const BIGNUM *,
                        BN_CTX *); /* method-specific */
} /* EC_GROUP */;

struct ec_point_st {
  const EC_METHOD *meth;

  /* All members except 'meth' are handled by the method functions,
   * even if they appear generic */

  BIGNUM X;
  BIGNUM Y;
  BIGNUM Z; /* Jacobian projective coordinates:
             * (X, Y, Z)  represents  (X/Z^2, Y/Z^3)  if  Z != 0 */
  int Z_is_one; /* enable optimized point arithmetics for special case */
} /* EC_POINT */;

EC_GROUP *ec_group_new(const EC_METHOD *meth);

int ec_wNAF_mul(const EC_GROUP *group, EC_POINT *r, const BIGNUM *scalar,
                size_t num, const EC_POINT *points[], const BIGNUM *scalars[],
                BN_CTX *);
int ec_wNAF_precompute_mult(EC_GROUP *group, BN_CTX *);
int ec_wNAF_have_precompute_mult(const EC_GROUP *group);

/* method functions in simple.c */
int ec_GFp_simple_group_init(EC_GROUP *);
void ec_GFp_simple_group_finish(EC_GROUP *);
void ec_GFp_simple_group_clear_finish(EC_GROUP *);
int ec_GFp_simple_group_copy(EC_GROUP *, const EC_GROUP *);
int ec_GFp_simple_group_set_curve(EC_GROUP *, const BIGNUM *p, const BIGNUM *a,
                                  const BIGNUM *b, BN_CTX *);
int ec_GFp_simple_group_get_curve(const EC_GROUP *, BIGNUM *p, BIGNUM *a,
                                  BIGNUM *b, BN_CTX *);
int ec_GFp_simple_group_get_degree(const EC_GROUP *);
int ec_GFp_simple_group_check_discriminant(const EC_GROUP *, BN_CTX *);
int ec_GFp_simple_point_init(EC_POINT *);
void ec_GFp_simple_point_finish(EC_POINT *);
void ec_GFp_simple_point_clear_finish(EC_POINT *);
int ec_GFp_simple_point_copy(EC_POINT *, const EC_POINT *);
int ec_GFp_simple_point_set_to_infinity(const EC_GROUP *, EC_POINT *);
int ec_GFp_simple_set_Jprojective_coordinates_GFp(const EC_GROUP *, EC_POINT *,
                                                  const BIGNUM *x,
                                                  const BIGNUM *y,
                                                  const BIGNUM *z, BN_CTX *);
int ec_GFp_simple_get_Jprojective_coordinates_GFp(const EC_GROUP *,
                                                  const EC_POINT *, BIGNUM *x,
                                                  BIGNUM *y, BIGNUM *z,
                                                  BN_CTX *);
int ec_GFp_simple_point_set_affine_coordinates(const EC_GROUP *, EC_POINT *,
                                               const BIGNUM *x, const BIGNUM *y,
                                               BN_CTX *);
int ec_GFp_simple_point_get_affine_coordinates(const EC_GROUP *,
                                               const EC_POINT *, BIGNUM *x,
                                               BIGNUM *y, BN_CTX *);
int ec_GFp_simple_set_compressed_coordinates(const EC_GROUP *, EC_POINT *,
                                             const BIGNUM *x, int y_bit,
                                             BN_CTX *);
int ec_GFp_simple_add(const EC_GROUP *, EC_POINT *r, const EC_POINT *a,
                      const EC_POINT *b, BN_CTX *);
int ec_GFp_simple_dbl(const EC_GROUP *, EC_POINT *r, const EC_POINT *a,
                      BN_CTX *);
int ec_GFp_simple_invert(const EC_GROUP *, EC_POINT *, BN_CTX *);
int ec_GFp_simple_is_at_infinity(const EC_GROUP *, const EC_POINT *);
int ec_GFp_simple_is_on_curve(const EC_GROUP *, const EC_POINT *, BN_CTX *);
int ec_GFp_simple_cmp(const EC_GROUP *, const EC_POINT *a, const EC_POINT *b,
                      BN_CTX *);
int ec_GFp_simple_make_affine(const EC_GROUP *, EC_POINT *, BN_CTX *);
int ec_GFp_simple_points_make_affine(const EC_GROUP *, size_t num,
                                     EC_POINT * [], BN_CTX *);
int ec_GFp_simple_field_mul(const EC_GROUP *, BIGNUM *r, const BIGNUM *a,
                            const BIGNUM *b, BN_CTX *);
int ec_GFp_simple_field_sqr(const EC_GROUP *, BIGNUM *r, const BIGNUM *a,
                            BN_CTX *);

/* method functions in montgomery.c */
int ec_GFp_mont_group_init(EC_GROUP *);
int ec_GFp_mont_group_set_curve(EC_GROUP *, const BIGNUM *p, const BIGNUM *a,
                                const BIGNUM *b, BN_CTX *);
void ec_GFp_mont_group_finish(EC_GROUP *);
void ec_GFp_mont_group_clear_finish(EC_GROUP *);
int ec_GFp_mont_group_copy(EC_GROUP *, const EC_GROUP *);
int ec_GFp_mont_field_mul(const EC_GROUP *, BIGNUM *r, const BIGNUM *a,
                          const BIGNUM *b, BN_CTX *);
int ec_GFp_mont_field_sqr(const EC_GROUP *, BIGNUM *r, const BIGNUM *a,
                          BN_CTX *);
int ec_GFp_mont_field_encode(const EC_GROUP *, BIGNUM *r, const BIGNUM *a,
                             BN_CTX *);
int ec_GFp_mont_field_decode(const EC_GROUP *, BIGNUM *r, const BIGNUM *a,
                             BN_CTX *);
int ec_GFp_mont_field_set_to_one(const EC_GROUP *, BIGNUM *r, BN_CTX *);

int ec_point_set_Jprojective_coordinates_GFp(const EC_GROUP *group,
                                             EC_POINT *point, const BIGNUM *x,
                                             const BIGNUM *y, const BIGNUM *z,
                                             BN_CTX *ctx);

struct ec_key_st {
  int version;

  EC_GROUP *group;

  EC_POINT *pub_key;
  BIGNUM *priv_key;

  unsigned int enc_flag;
  point_conversion_form_t conv_form;

  int references;
  int flags;

  ECDSA_METHOD *ecdsa_meth;

  CRYPTO_EX_DATA ex_data;
} /* EC_KEY */;


#if defined(__cplusplus)
}  /* extern C */
#endif

#endif  /* OPENSSL_HEADER_EC_INTERNAL_H */
