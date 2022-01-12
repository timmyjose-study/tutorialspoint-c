#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
  FILE *fp = fopen("/tmp/tuts.txt", "w+");

  if (!fp) {
    perror("Error while opening file");
    exit(EXIT_FAILURE);
  } else {
    fprintf(fp, "This is the first line\n");
    fputs("This is the second line\n", fp);
    fclose(fp);
  }


  return 0;
}
