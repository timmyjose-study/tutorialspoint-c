#include <stdio.h>

int main(int argc, char *argv[])
{
  int a[] = { 10, 20, 30, 40, 50 };
  int *p = a;

  while (p <= &a[4]) {
    printf("Address = %p, value = %d\n", p, *p);
    p++;
  }

  return 0;
}
