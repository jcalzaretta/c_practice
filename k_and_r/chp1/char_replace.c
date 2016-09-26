#include <stdio.h>

main() {
  int c;
  c = getchar();
  while((c = getchar()) != EOF)
    switch(c) {
      case '\t' :
	printf("\\t");
      case '\b' :
	printf("\\b");
      case '\\' :
	printf("\\");
      default :
	putchar(c);
    }
}
