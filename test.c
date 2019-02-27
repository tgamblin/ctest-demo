#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("usage: test <argument>\n");
    printf("    If <argument> is 0, print SUCCESS. Otherwise print FAIL.\n");
    exit(1);
  }

  if (atoi(argv[1]) == 0) {
    printf("SUCCESS\n");
    exit(0);
  } else {
    printf("FAIL\n");
    exit(1);
  }
}
