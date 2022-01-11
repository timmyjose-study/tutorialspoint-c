#include <stdio.h>

int main(int argc, char *argv[])
{
  int a[] = { 10, 20, 30, 40, 50 };
  int *p[] = { &a[0], &a[1], &a[2], &a[3], &a[4] };

  for (int i = 0; i < 5; i++) {
    printf("Address = %p, value = %d\n", p[i], *p[i]);
  }

  char *as[] = { "Bob", "Dave", "Barry", "Larry", "Chaz" };
  char **pa[] = { &as[0], &as[1], &as[2], &as[3], &as[4] };

  for (int i = 0; i < 5; i++) {
    printf("Address = %p, value = %s\n", pa[i], *pa[i]);
  }

  return 0;
}
