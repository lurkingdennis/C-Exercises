#include <stdio.h>


/* Modify the temperature program to print the table in reverse order, that is, from 300 degrees to 0. */
int main(int argc, char *argv[]) {

	int celcius;

	float upper, lower, step;

	upper = 300; /* upper limit */
	lower = 0; /* lower limit */
	step = 20; /* step down size */

	celcius = upper; 

	printf("Celcius\tFahrenheit\n");
	for(celcius = upper; celcius >= lower; celcius = celcius - step) {
		printf("%d\t%6.0f\n", celcius, (celcius * (9.0/5.0) + 32.0));
	}

	return 0;
}
