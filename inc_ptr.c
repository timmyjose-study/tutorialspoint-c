#include <stdio.h>

int main(int argc, char *argv[])
{
  int a[] = { 10, 20, 30, 40, 50 };
  int *p = a;

  printf("size of integer = %lu bytes\n", sizeof(int));

  for (int i = 0; i < 5; i++) {
    printf("Address = %p, value = %d\n", p, *p);
    p++;
  }

  return 0;
}
