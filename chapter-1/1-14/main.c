#include <stdio.h>

#define BUFFER 130 // there are 95 printable characters not including ASCII extended codes

/* write a program to print the frequencies of different characters in its input */
int main(int argc, char *argv[])
{
	int c, charactersEntered[BUFFER]; 
	int invisibleCharCount = 0;
	for ( int i = 0; i < BUFFER; ++i ) { /* sets subscript values to 0 */
		charactersEntered[i] = 0;
	}

	while ( (c = getchar()) != EOF ) {
		if ( c == ' ' || c == '\t' || c == '\n' ) {
			++invisibleCharCount;
		} else {
			++charactersEntered[c];
		}
	}

	printf("---- HISTOGRAM ----\n");

	for ( int i = 0; i < BUFFER; ++i ) { 
		if ( charactersEntered[i] > 0 ) { // value of 0 means it doesn't hold anything, this checks if it contains any letter.
			printf("%c |", i);
			for ( int y = 0; y < charactersEntered[i]; ++y ) {
				putchar('#');
			}
			putchar('\n');
		}
	}

	printf("Invisible characters | ");
	for ( int i = 0; i < invisibleCharCount; ++i) {
		putchar('#');
	}
	putchar('\n');
	return 0;
}
