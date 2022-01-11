#include <stdio.h>

#if !defined(MESSAGE)
#define MESSAGE "All hail the king!"
#endif

#define message_for(a, b) \
  printf(#a " and " #b ": you are nuts!\n")

#define tokenpaster(n) \
  printf("token" #n " = %d\n", token##n)

#define MAX(x, y) \
  ((x) > (y)) ? (x) : (y)

#define MIN(x, y) \
  ((x) < (y)) ? (x) : (y)

int main(int argc, char *argv[])
{
  printf("Current file: %s\n", __FILE__);
  printf("Current line: %d\n", __LINE__);
  printf("Current date (at time of compilation): %s\n", __DATE__);
  printf("Current time (at time of compilation): %s\n", __TIME__);
  printf("Is ANSI?: %d\n", __STDC__);

  message_for("Bob", "Dave");

  int token99 = 100;
  tokenpaster(99);

  puts(MESSAGE);

  int a = 21 - 9 + 10, b = 2 * a + 1;
  printf("max of %d and %d = %d\n", a, b, MAX(a, b));
  printf("min of %d and %d = %d\n", a, b, MIN(a, b));

  return 0;
}
