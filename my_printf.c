#include <stdio.h>
#include <stdarg.h>

void my_printf (int nargs, ...)
{
  va_list va;
  va_start (va, nargs);

  for (int i = 0; i < nargs; i++) {
    printf ("%s ", va_arg (va, const char*));
  }
  puts ("");

  va_end (va);
}

int main (int argc, char *argv [])
{
  my_printf (1, "hello");
  my_printf (2, "hello", "world");
  my_printf (3, "hello", "world", "nice");
  my_printf (4, "hello", "world", "nice", "to");
  my_printf (5, "hello", "world", "to", "meet", "you");
        
  return 0;
}
