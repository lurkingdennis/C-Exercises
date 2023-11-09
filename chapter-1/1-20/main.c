#include <stdio.h>

/* Write a program detab that replaces tabs in the input with the proper number of blanks to space tho the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter */
int main(int argc, char *argv[])
{
  int c;

  while ( (c = getchar()) != EOF ) {
    int tablength = 6;
    if ( c == '\t' ) {
      while ( tablength ) {
        putchar(' ');
        --tablength;
      }
    } else {
      putchar(c);
    }
  }
  return 0;
}

