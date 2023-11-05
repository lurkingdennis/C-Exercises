#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* Revise the main routine of the longest-line program so it will correctly print the length of arbitary long input lines, and as much as possible of the text */
int main(int argc, char *argv[])
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
		printf("length of line: %d (nl char include)\n", len);
	}

	if ( max > 0 ) {
		printf("%s", longest);
		printf("length of longest line: %d\n", max);
	} else printf("no input\n");
	

	return 0;
}

int get_line(char s[], int lim) {

	int c, i;

	for ( i = 0; i < lim - 1 && (c = getchar()) != EOF && c!='\n'; ++i ) {
		s[i] = c;
	}

	if ( c == '\n' ) {
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i;

	i = 0;
	
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}
