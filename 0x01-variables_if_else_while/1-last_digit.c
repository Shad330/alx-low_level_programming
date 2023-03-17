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
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = (n % 10);
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
	return (0);
}
