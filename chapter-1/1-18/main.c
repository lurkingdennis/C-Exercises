#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int lim);
void rm_trailingblanks(char from[], int len);

int main(int argc, char *argv[]) {
  char line[MAXLINE];
  int len = 0;

  while((len = get_line(line, MAXLINE)) > 0) {
    rm_trailingblanks(line, len);
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

void rm_trailingblanks(char line[], int len) {
  int i;

  for (i = len - 2; line[i] == ' ' || line[i] == '\t'; --i)
    ;

  line[i + 1 ] = '\n';
  line[i + 2 ] = '\0';

}
