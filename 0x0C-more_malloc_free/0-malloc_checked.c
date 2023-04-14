#include "main.h"

/**
 * *malloc_checked - a function that allocates memory
 * @b: an integer
 * Return: a pointer to an array
*/

void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
	exit(98);

	return (x);
}
