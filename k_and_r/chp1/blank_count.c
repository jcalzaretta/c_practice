#include <stdio.h>

/* count blanks of all types */

main() {
  int c, blank;

  blank = 0;
  while ((c = getchar ()) != EOF)
    switch(c) {
      case '\n' :
	++blank;
      case ' ' :
        ++blank;
      case '\t' :
        ++blank;
    }
  printf("%d\n", blank);
}
