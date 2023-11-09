#include <stdio.h>

#define MAXLINE 1000

void reverse(char s[], int len);
int get_line(char line[], int len);
/* Write a function "reverse(s)" that reverses the character string s. Use it to write a program that reverses its input a line at a time   */
int main(int argc, char *argv[])
{

  char line[MAXLINE];
  int len = 0;

  printf("Program that reverses its input: \n");
  while((len = get_line(line, MAXLINE)) > 0) {
    reverse(line, len);
    printf("%s", line);
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

void reverse(char s[], int len) {
  int i, c;
  char temp[len];
  c = 0;
  for ( i = len - 2; i >= 0 ; --i ) {
    temp[i] = s[c]; 
    ++c;
  }
  if ( s[len-1] == '\n' ) {
    temp[c] = '\n';
    ++c;
  }

  temp[c] = '\0';

  for (int i = 0; i <= len; ++i ) {
    s[i] = temp[i];
  }
}
