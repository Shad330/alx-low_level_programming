#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program that gets the last number
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int m = (n % 10);

	if (m > 0)
		printf("%i is positive\n", m);
	else if (m < 0)
	{
		printf("%i is negative\n", m);
	}
	else
	{
		printf("%i is zero\n", m);
	}
	int make_iso_compilers_happy;
	return (0);
}
