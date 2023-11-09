#include <stdio.h>

/* Write a program that prints its input one word per line */
int main(int argc, char *argv[]) {

	int c, lastChar;

	while ((c = getchar()) != EOF ) {
		if ( c == ' ' || c == '\t' || c == '\n' ) {
			if ( lastChar != c ) {
				putchar('\n');
			}
		} else {
			putchar(c);
		}

		lastChar = c;
	}

	return 0;
}
