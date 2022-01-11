#include <stdio.h>

#define LENGTH 10
#define BREADTH 20

int main(int argc, char *argv[])
{
  const int L = 10;
  const int B = 20;

  printf("%d, %d\n", LENGTH * BREADTH, L * B);

  return 0;
}
