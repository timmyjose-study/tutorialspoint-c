/* On my system, this is 20 times faster than the copy_basic program, understandably so */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define BUFSIZE 1024 * 8

int main(int argc, char *argv[])
{
  if (argc != 3) {
    fprintf(stderr, "Usage: copy_buffered [src file] [dst file]\n");
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
      char buf[BUFSIZE];
      unsigned int bytes_read;

      do {
        bytes_read = fread(buf, 1, BUFSIZE, ip);
        if (!bytes_read) {
          break;
        }

        fwrite(buf, 1, bytes_read, op);
      } while (bytes_read);

      fclose(op);
      fclose(ip);
    }
  }

  return 0;
}
