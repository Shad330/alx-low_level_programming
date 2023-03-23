#include"main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for digits in a given entry
 *
 * @c: is an integer value
 *
 * Return: 1 or 0 (success)
*/

int _isdigit(int c)
{
	for (c = 0; c <= 9; c++)
	{
		if (isdigit(c))
		{
		return (1);
		}
		else
		{
		return (0);
		}
	}
}

