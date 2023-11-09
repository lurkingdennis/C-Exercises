#include <stdio.h>

/* Rewrite the temperature conversion program of Section 1.2 to use a function for conversion */

float fahrToCelcius(float fahr);

int main(int argc, char *argv[])
{
	float fahr;

	float step, upper, lower;

	step = 20; /* step size */
	upper = 300; /* upper limit */
	lower = 0; /* lower limit */

	fahr = lower;


	printf("Fahr\tCelcius\n");
	while (fahr <= upper) {
		printf("%3.0f\t%6.1f\n", fahr, fahrToCelcius(fahr));
		fahr = fahr + step;
	}

	return 0;
}

float fahrToCelcius(float fahr) {
	return (5.0/9.0) * (fahr-32);
}
