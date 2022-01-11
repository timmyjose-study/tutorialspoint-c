#include <stdio.h>

int main(int argc, char *argv[])
{
  int x = 42;
  int *p = &x;
  int **pp = &p;

  printf("x = %d, *p = %d, **pp = %d\n", x, *p, **pp);
  *p = 100;
  printf("x = %d, *p = %d, **pp = %d\n", x, *p, **pp);
  **pp = 200;
  printf("x = %d, *p = %d, **pp = %d\n", x, *p, **pp);

  return 0;
}
