#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
  if (argc != 3) {
    fprintf(stderr, "Usage: copy_basic [src file] [dst file]\n");
    exit(EXIT_FAILURE);
  }

  FILE *ip = fopen(argv[1], "rb");
  if (!ip) {
    fprintf(stderr, "Error while opening input file: %s\n", strerror(errno));
    exit(EXIT_FAILURE);
  } else {
    FILE *op = fopen(argv[2], "wb");
    if (!op) {
      fprintf(stderr, "Error while opening output file: %s\n", strerror(errno));
      exit(EXIT_FAILURE);
    } else {
      int c;
      while ((c = fgetc(ip)) != EOF) {
        fputc(c, op);
      }

      fclose(op);
      fclose(ip);
    }
  }

  return 0;
}
