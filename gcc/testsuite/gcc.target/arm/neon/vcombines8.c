/* Test the `vcombines8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vcombines8 (void)
{
  int8x16_t out_int8x16_t;
  int8x8_t arg0_int8x8_t;
  int8x8_t arg1_int8x8_t;

  out_int8x16_t = vcombine_s8 (arg0_int8x8_t, arg1_int8x8_t);
}

/* { dg-final { cleanup-saved-temps } } */
