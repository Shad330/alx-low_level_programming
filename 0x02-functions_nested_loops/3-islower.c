#include"main.h"

/**
 * int _islower - function that checkes lower case letters
 *
*/

int _islower(int c)
{	
	if (c >= 97 && c <= 122)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
