#include <stdio.h>

double average(const int*, int);

int main(int argc, char *argv[])
{
  int a[] = { 10, 20, 30, 40, 50 };
  printf("Average = %.2f\n", average(a, 5));

  return 0;
}

double average(const int *a, int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += *(a + i);
  }

  return (double)sum/ n;
}
