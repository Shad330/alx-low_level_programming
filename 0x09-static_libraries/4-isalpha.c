#include"main.h"

/**
 * _isalpha  - function that checkes alphabetic  letters
 * @c: checks for function input
 * Return: returns 1 if c is alphabetic ,else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
