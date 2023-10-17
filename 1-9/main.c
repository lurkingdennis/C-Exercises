#include <stdio.h>

/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank */
int main(int argc, char *argv[])
{

	int c, lastC;

	while ( (c = getchar()) != EOF ) {
		if ( c == ' ' ) {
			if ( c != lastC ) {
				putchar(c);
				lastC = c;
			}
		}
		if ( c != ' ' ) {
			putchar(c);
			lastC = 0;
		}
	}
	return 0;
}
