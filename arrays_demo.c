#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void two_dimensional_demo()
{
  int a[5][2] = { {0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8} };

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 2; j++)
      printf("%d ", a[i][j]);
    puts("");
  }
}

void three_dimensional_demo()
{
  int a[5][3][2] = { { {0, 0}, {0, 1} , {0, 3} }, 
    { {1, 2}, {1, 3}, {1, 4} }, 
    { {2, 4}, {2, 5}, {2, 6} }, 
    { {3, 6}, {3, 7}, {3, 8} }, 
    { {4, 8}, {4, 9}, {4, 10} } };

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      printf("\t");
      for (int k = 0; k < 2; k++) 
        printf("%d ", a[i][j][k]);
      puts("");
    }
    puts("");
  }
}

void fill_array_with_randoms(char *a, size_t len)
{
  for (size_t i = 0; i < len; i++) {
    a[i] = rand() % 100 + 1;
  }
}

int main(int argc, char *argv[])
{
  srand(time(NULL));

  two_dimensional_demo();
  puts("");

  three_dimensional_demo();

  char a1[5];
  fill_array_with_randoms(a1, 5);
  for (int i = 0; i < 5; i++) {
    printf("%d ", a1[i]);
  }
  puts("");

  char a2[10];
  fill_array_with_randoms(a2, 10);
  for (int i = 0; i < 10; i++) {
    printf("%d ", a2[i]);
  }
  puts("");

  return 0;
}