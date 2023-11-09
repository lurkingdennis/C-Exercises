#include <stdio.h>

#define BUFFER 25 /* assumes that a word is no longer than 25 */

#define TRUE 1
#define FALSE 0

/* Write a program to print a histogram of the lengths of the words in its input. */
int main(int argc, char *argv[])
{
	int c, inWord, wordSize, lastChar, wordLength[BUFFER];

	wordSize = 0;
	lastChar = 0;

	inWord = FALSE; // indicates if its inside a word or not.

	for ( int i = 0; i < BUFFER; ++i ) {
		wordLength[i] = 0;
	}

	while ( (c = getchar()) != EOF ) { 
		if ( c == ' ' || c == '\t' || c == '\n' ) {
			if ( inWord == TRUE ) {
				++wordLength[wordSize];
				wordSize = 0;
			}
			inWord = FALSE;
		} else {
			inWord = TRUE;
			++wordSize;
		}
		lastChar = c;
	}
	printf("----- HISTOGRAM -----\n");
	for (int i = 0; i < BUFFER; ++i) {
		if ( wordLength[i] != 0 ) {
			printf("%3d |", i);
			for (int y = 0; y < wordLength[i]; ++y) {
				putchar('#');
			}
			putchar('\n');
		}
	}
	return 0;

}
