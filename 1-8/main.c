#include <stdio.h>

/* write a program to count blanks, tabs and newlines. */
int main(int argc, char *argv[])
{
	int c, tabs, blanks, nl;

	tabs = 0;
	blanks = 0;
	nl = 0;


	while ( (c = getchar()) != EOF ) {
		if ( c == '\t' ){ // test for tabs
			++tabs;
		}
		if ( c == ' ' ) { // tests for blanks
			++blanks;
		}
		if ( c == '\n' ) { // tests for newlines
			++nl;
		}
	}

	printf("tabs: %d\n", tabs);
	printf("blanks: %d\n", blanks);
	printf("newlines: %d\n", nl);
	return 0;
}
