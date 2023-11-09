#include <stdio.h>

#define MAXLINE 1000

/* write a program to print all input lines longer than 80 characters */

int get_line(char line[], int lim);

int main(int argc, char *argv[])
{
  int len, min_size;
  len = 0;
  min_size = 80;
  char line[MAXLINE];


  printf("program that prints lines that are 80+ characters\n");

  while ( (len = get_line(line, MAXLINE)) > 0 ) {

    if ( len > min_size ) {
      if ( len > MAXLINE ) {
        printf("%slength is: %d+ (incl. newline char)\n", line, len);
      } else {
        printf("%slength is: %d (incl. newline char)\n", line, len);
      }
    } else {
      printf("text is not long enough to be printed\n");
    }
  }
  return 0;
}

int get_line(char line[], int lim) {

  int c, i;

  i = 0;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  if ( c == '\n' ) {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';

  return i;
}
