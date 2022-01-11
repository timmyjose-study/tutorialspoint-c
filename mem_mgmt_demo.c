#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fail_on_mem_err(void *p)
{
  if (!p) {
    fprintf(stderr, "failed to allocate memory");
    exit(1);
  }
}

int main(int argc, char *argv[])
{
  char *name = NULL;

  name = malloc(100 * sizeof(char));
  fail_on_mem_err(name);
  strncpy(name, "Engelbart Humperdinck", strlen("Engelbart Humperdinck"));
  printf("%s\n", name);
  free(name);

  name = calloc(100, sizeof(char));
  fail_on_mem_err(name);
  strncpy(name, "Lev Tolstoy", strlen("Lev Tolstoy"));
  printf("%s\n", name);
  free(name);

  char *buf = malloc(20 * sizeof(char));
  fail_on_mem_err(buf);
  strncpy(buf, "Hello, world!", strlen("Hello, world!"));
  printf("%s\n", buf);
  buf = realloc(buf, 100);
  fail_on_mem_err(buf);
  strncat(buf, " ", 1);
  strncat(buf, "Nice to meet you again!", strlen("Nice to meet you again!"));
  printf("%s\n", buf);
  free(buf);

  return 0;
}
