#include <stdio.h>


#define TABS 8

int main(int argc, char *argv[])
{
  int c;
  int nr_of_spaces = 0;
  while ( ( c = getchar() ) != EOF ) {
    if ( c == ' ' ) {
      ++nr_of_spaces;
      if ( nr_of_spaces % TABS == 0 ) {
        putchar('\t');
      }
    } else {
      while(nr_of_spaces) {
        putchar(' ');
        --nr_of_spaces;
      }
      putchar(c);
    }
  }
  return 0;
}
