#include <stdio.h>

/* Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way. */
int main(int argc, char *argv[]) {
	int c;
	while ( (c = getchar()) != EOF ) {
		if ( c == '\t' ) {
			printf("\\t");
		}
		else if ( c == '\\' ) {
			printf("\\\\");
		}
		else if ( c == '\b' ) {
			printf("\\b");
		} else {
			putchar(c);
		}
	}
	return 0;
}
