#include <stdio.h>
#include <limits.h>
#include <float.h>

// Ranges of char, int, short, long, float, and double

int main(void)
{

  printf("CHAR - unsigned: %i, signed max: %i, signed min: %i\n", UCHAR_MAX, SCHAR_MAX, SCHAR_MIN);
  printf("INT - unsigned: %i, signed max: %i, signed min: %i\n", UINT_MAX, INT_MAX, INT_MIN);
  printf("SHORT - unsigned: %i, signed max: %i, signed min: %i\n", USHRT_MAX, SHRT_MAX, SHRT_MIN);
  printf("LONG - unsigned: %lu, signed max: %ld, signed min: %ld\n", ULONG_MAX, LONG_MAX, LONG_MIN);
  printf("FLOAT - Max: %g, Min: %g\n", FLT_MAX, FLT_MIN);
  printf("DOUBLE - Max: %lg, Min: %lg\n", DBL_MAX, DBL_MIN);
}