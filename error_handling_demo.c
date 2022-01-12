#include <stdio.h>
#include <errno.h>
#include <string.h> // for strerror

int main (int argc, char *argv [])
{
  FILE *fp = fopen ("non-existent-file", "rb");

  if (!fp) {
    printf ("Value of errno = %d\n", errno);
    perror ("Oh noes!"); // automatically prints the error message
    fprintf (stderr, "No way! Got an error - %s\n", strerror (errno));
  } else {
    fclose (fp);
  }
  
  return 0;
}
