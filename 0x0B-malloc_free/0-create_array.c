#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: the size of array
 * @c: the char to start with
 * Return: pointer to array or 0
 */

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);

	while (size--)
		x[size] = c;

	return (x);
}
