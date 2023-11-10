#include <stdio.h>


#define TABS 6

/* Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stop, which should be given preference? */
int main(int argc, char *argv[])
{
  int c;
  int spacecount = 0;
  while ( ( c = getchar() ) != EOF ) {
    if ( c == ' ' ) {
      ++spacecount;
      if ( spacecount % TABS == 0 ) {
        putchar('\t');
        spacecount = 0;
      }
    } else {
      while ( spacecount > 0 ) {
        putchar(' ');
        --spacecount;
      }
      putchar(c);
    }
  }
  return 0;
}
