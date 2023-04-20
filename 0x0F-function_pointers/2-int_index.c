#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array of integeres used
 * @size: the size of the array used
 * @cmp: a pointer to the cunction used
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
				i++;
		}
	return (-1);
}
