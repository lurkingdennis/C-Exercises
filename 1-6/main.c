#include <stdio.h>

/* verify that the expression getchar() != EOF is 0 or 1 */
int main(int argc, char *argv[])
{
	// prints 0 if EOF, 1 if entered a character.
	int c = getchar() != EOF;
	printf("%d", c);
	return 0;
}

