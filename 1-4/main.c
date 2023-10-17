#include <stdio.h>


/* Write a program to print the corresponding Celcius to Fahrenheit table. */
int main(int argc, char *argv[])
{
	float celcius, fahr;

	float upper, lower, step;

	upper = 300; /* upper limit */
	lower = 0; /* lower limit */
	step = 20; /* step size */

	celcius = lower; 

	printf("Celcius\tFahrenheit\n");
	while(celcius <= upper) {
		fahr = (celcius * (9.0/5.0)) + 32.0;
		printf("%3.0f\t%6.0f\n", celcius, fahr);
		celcius = celcius + step;
	}


	return 0;
}
