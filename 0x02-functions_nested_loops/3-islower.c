#include"main.h"

/**
 * int _islower - function that checkes lower case letters
 *
 * @c: checks for function input
 *
 * Return: returns 1 if c is lowercase
 * 	otherwise always 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
