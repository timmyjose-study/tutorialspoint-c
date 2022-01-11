#include <stdio.h>
#include <string.h>

typedef enum { 
  int_t,
  float_t,
  string_t 
} var_t;

typedef union {
  int i; // 4
  float f; // 4
  char s[20]; // 20
} data_t;

typedef struct {
  var_t var;
  data_t data;
} my_data_t;

void interpret_data(const my_data_t*);

int main(int argc, char *argv[])
{
  printf("%lu, %lu\n", sizeof(data_t), sizeof(my_data_t));

  my_data_t d;

  d.var = int_t;
  d.data.i = 42;
  interpret_data(&d);

  d.var = float_t;
  d.data.f = 2.78128;
  interpret_data(&d);

  d.var = string_t;
  strncpy(d.data.s, "Hello, world", strlen("Hello, world"));
  interpret_data(&d);

  return 0;
}

void interpret_data(const my_data_t *d)
{
  switch (d->var) {
    case int_t: printf("Got an integer: %d\n", d->data.i); break;
    case float_t: printf("Got a float: %.3f\n", d->data.f); break;
    case string_t: printf("Got a string: %s\n", d->data.s); break;
  }
}
