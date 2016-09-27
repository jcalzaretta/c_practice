/* Write a program detab that replaces tabs in the input with the
 * proper number of blanks to space to the next tab stop.
 * Assume a fixed set of tab stops, say every n columns.
 * Should n be a variable or symbolic parameter? */

#include <stdio.h>

#define TABS 8		/* number of colums between tab stops */
#define MAXLINE 1000	/* maximum input size */

/* prototypes */
int getliner(char line[], int maxline);
void tab(char line[], char output[], int size);
int find_blanks(int column, int tabs);

main() {
  char line[MAXLINE];	/* line saved here */
  char tabbed[MAXLINE];	/* modified tabbed line saved here */
  int linesize;		/* size of input line */

  linesize = getliner(line, MAXLINE);	/* save the input  to line[], store size to linesize */
  tab(line, tabbed, linesize);		/* tabulate line[] and save to tabbed[] */
}

int getliner(char input[], int lim) {
  int c, i;

  for (i = 0; i <= lim - 1 && (c = getchar()) != EOF; ++i)
    printf("getting input");
    input[i] = c;
  input[i + 1] = '\0';
  return i;
}

void tab(char input[], char output[], int size) {
  printf("we are in the tab method");
  int output_iterator, input_iterator, diff, i;
  output_iterator = input_iterator = 0;
  
  while (input_iterator <= size)
    if (input[input_iterator] == '\t') {
      diff = find_blanks(output_iterator, TABS);	/* calculate distance to next tab stop */
      for (i = 0; i <= diff; ++i)
	output[output_iterator + i] = ' ';		/* insert spaces until next tab stop */
      ++input_iterator;
      output_iterator += diff;
    }
    else {
      output[output_iterator] = input[input_iterator];
    }
}

int find_blanks(int column, int tabs) {
  return column % tabs;
}
