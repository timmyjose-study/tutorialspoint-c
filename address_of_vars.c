#include <stdio.h>

int main(int argc, char *argv[])
{
  int x = 42;
  char a[10];

  printf("address of x = %p\n", &x);
  printf("address of a = %p\n", a);

  return 0;
}