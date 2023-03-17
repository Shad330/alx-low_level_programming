#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function uses if else to check whether the number is +ve, -ve or 0
 *
 * Resturn: o (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("%i is positive\n", n);
	} else if (n < 0) {
		printf("%i is negative\n", n);
	} else {
		printf("%i is zero\n", n);
	}
	return (0);
}
