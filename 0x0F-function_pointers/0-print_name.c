#include "function_pointers.h"

/**
 * print_name - a pointer to function that prints a name
 * @name: the paramter used to store the string
 * @f: a pointer to a function
 *
 *Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
