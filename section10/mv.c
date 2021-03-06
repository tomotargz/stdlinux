#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  if (argc != 3) {
    fprintf(stderr, "Usage: %s SRC DEST\n", argv[0]);
    exit(1);
  }
  if (rename(argv[1], argv[2]) == -1) {
    perror(argv[1]);
    exit(1);
  }
  exit(0);
}
