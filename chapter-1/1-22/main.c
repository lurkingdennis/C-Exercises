/* This problem seems easy to most people but I struggled with this a lot but I did it. Don't feel too bad
 * if you couldn't come up with a solution in a few hours. This took to 4 days to do. I just kept typing 
 * and I didn't really think about what my code is doing. Lesson learned.
 */

#include <stdio.h>

#define MAXLENGTH 40
#define MAXLINE 10000
#define BUFFER 5
#define TRUE 1
#define FALSE 0

int get_line(char line[], int lim); 
void fold(char line[], char foldedLine[], int lim);

/* Write a program to '' fold '' long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column */
int main(int argc, char *argv[]) {
	int len;
	char line[MAXLINE];
	char foldedLine[MAXLINE];
	while ( (len = get_line(line, MAXLINE)) > 0 )  {
		fold(line, foldedLine, MAXLENGTH);
		printf("%s", foldedLine);
	}
	return 0;
}

int get_line(char line[], int lim) {
	int i, c;
	int temp[lim];
	i = 0;
	while ((c = getchar()) != EOF && c != '\n' && c != '\0' ) {
		line[i] = c;
		++i;
	}

	if ( c == '\n' ) {
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;
}

/* fold line at MAXLENGTH */
void fold(char line[], char foldedLine[], int lim) {
	int i, j;
	int column = 0;
	int inWord = FALSE;
	for ( i = 0, j = 0; line[i] != '\0'; ++i, ++j ) {

		if (line[i] == '\n') {
			column = 0;
		}

		++column;

		if ( line[i] != ' ' && line[i] != '\t' ) {
			inWord = TRUE;
		} else {
			inWord = FALSE;
		}

		if (column >= lim - BUFFER) {

			if ( inWord == TRUE ) {
				foldedLine[j] = line[i];
			} else {
				foldedLine[j] = '\n';
				column = 0;
			}
		} else {
			foldedLine[j] = line[i];
		}
	}
	foldedLine[j] = '\0';
}
