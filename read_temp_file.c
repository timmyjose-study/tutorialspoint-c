#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp = fopen("/tmp/tuts.txt", "r+");

  if (!fp) {
    perror("Error while opening file");
    exit(EXIT_FAILURE);
  } else {
    while (!feof(fp)) {
      putchar(fgetc(fp));
    }
    fclose(fp);
  }

  return 0;
}
