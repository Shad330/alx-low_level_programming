#include "function_pointers.h"

/**
 * array_iterator - Function that performs an action when its called
 * @array: array used in the function
 * @size: the size of the array used
 * @action: the pointer to a function used
 *
 * Returen: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
