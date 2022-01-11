#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <time.h>

typedef struct {
  int *randoms;
  size_t len;
} random_arr_t;

void check_mem_err(void *p)
{
  if (!p) {
    fprintf(stderr, "could not allocate memory\n");
    exit(1);
  }
}

random_arr_t *get_randoms()
{
  random_arr_t *a = malloc(sizeof(random_arr_t));
  check_mem_err(a);

  a->randoms = malloc(sizeof(int) * 10);
  check_mem_err(a->randoms);
  a->len = 10;


  for (int i = 0; i < 10; i++) {
    *(a->randoms + i) = rand() % 100 + 1;
  }

  return a;
}


int main(int argc, char *argv[])
{
  srand(time(0));

  random_arr_t *a = get_randoms();
  for (int i = 0; i < a->len; i++) {
    printf("%d ", *(a->randoms + i)); 
  }
  puts("");

  free(a->randoms);
  free(a);

  return 0;
}
