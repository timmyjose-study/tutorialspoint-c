#include <stdio.h>
#include <stdarg.h>

void minprintf (char *fmt, ...)
{
  va_list ap;
  char *p, *sval;
  int ival;
  double dval;

  va_start (ap, fmt);

  for (p = fmt; *p; p++) {
    if (*p != '%') {
      putchar(*p);
      continue;
    }

    switch (*++p) {
      case 'd':
        ival = va_arg(ap, int);
        printf("%d", ival);
        break;

      case 'f':
        dval = va_arg(ap, double);
        printf("%f", dval);
        break;

      case 's':
        sval = va_arg(ap, char*);
        printf("%s", sval);
        break;

      default:
        putchar(*p);
        break;
    }
  }

  va_end(ap);
}

int main (int argc, char *argv [])
{
  minprintf("My name is %s, and I have eaten %d burgers today\n", "Inigo Montoya", 42);
  minprintf("%d\t->%f\t->%s\n", 100, 3.14159, "hola");

  return 0;
}
