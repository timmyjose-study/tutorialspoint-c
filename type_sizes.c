#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[])
{
  printf("Range of unsigned char = %u to %u\n", 0, UCHAR_MAX);
  printf("Range of signed char = %d to %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("Range of unsigned short = %u to %u\n", 0, USHRT_MAX);
  printf("Range of signed short = %d to %d\n", SHRT_MIN, SHRT_MAX);
  printf("Range of unsigned int = %u to %u\n", 0, UINT_MAX);
  printf("Range of signed int = %d to %d\n", INT_MIN, INT_MAX);
  printf("Range of unsigned long = %lu to %lu\n", 0UL, ULONG_MAX);
  printf("Range of signed long = %ld to %ld\n", LONG_MIN, LONG_MAX);
  printf("Range of unsigned long long = %llu to %llu\n", 0ULL, ULLONG_MAX);
  printf("Range of signed long long = %lld to %lld\n", LLONG_MIN, LLONG_MAX);
  printf("Range of float = %g to %g\n", FLT_MIN, FLT_MAX);
  printf("Range of double = %g to %g\n", DBL_MIN, DBL_MAX);
  printf("Precision of floats = %d\n", FLT_DIG);
  printf("Precision of doubles = %d\n", DBL_DIG);

  return 0;
}