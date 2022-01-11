#include <stdio.h>

int main(int argc, char *argv[])
{
  int x = 42;
  int *p = &x;

  printf("x = %d, *p = %d\n", x, *p);
  *p = 100;
  printf("After modification, x = %d, *p = %d\n", x, *p);

  return 0;
}

