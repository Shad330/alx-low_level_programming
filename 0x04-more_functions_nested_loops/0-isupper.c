#include"main.h"

/**
 * _islower - function that checkes lower case letters
 * @c: checks for function input
 * Return: returns 1 if c is lowercase,else  always 0 (success)
*/

int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
