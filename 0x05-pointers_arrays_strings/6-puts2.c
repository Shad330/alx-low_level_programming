#include "main.h"

/**
 * _puts2 - print a given string to screen
 *
 * @str: passed pointer argument for string
 * Return: void
*/

void _puts2(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		if ( len % 2 == 0)
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
