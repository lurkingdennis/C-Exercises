#include <stdio.h>

/* Modify temperature program to print a heading above the table */

int main(int argc, char *argv[])
{
	float fahr, celcius;

	float step, upper, lower;

	step = 20; /* step size */
	upper = 300; /* upper limit */
	lower = 0; /* lower limit */

	fahr = lower;


	printf("Fahr\tCelcius\n");
	while (fahr <= upper) {
		celcius = (5.0/9.0) * (fahr-32);
		printf("%3.0f\t%6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}

	return 0;
}
