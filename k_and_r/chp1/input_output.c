#include <stdio.h>

/* copy input to output */

main() {
  int c;
  c = getchar();
  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}
