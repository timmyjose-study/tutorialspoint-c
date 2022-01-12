#include <stdio.h>
#include <stdarg.h>

double average (int, ...);

int main (int argc, char *argv [])
{
  printf ("%.2f\n", average (5, 1.2, 2.3, 3.4, 4.5, 5.6));
  printf ("%.2f\n", average (3, 1.2, 2.3, 3.4));
  printf ("%.2f\n", average (1, 1.2));
  printf ("%.2f\n", average (0));
  
  return 0;
}

double average (int nargs, ...)
{
  if (nargs <= 0) {
    return 0.0;
  }
  
  va_list va;
  double sum = 0.0;

  va_start (va, nargs);

  for (int i = 0; i < nargs; i++) {
    sum += va_arg (va, double);
  }

  va_end (va);

  return sum / nargs;
}
