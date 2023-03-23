#include"main.h"

/**
 * more_numbers  - C program to demonstrate putchar() method
 *
 * Return: Always 0 (success)
 *
*/

void more_numbers(void)
{
	int line, digit, count;

	for (line = 1; line <= 10; line++)
	{
		for (count = 0; count <= 14; count++)
		{
			digit = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				digit = count % 10;
			}
			_putchar(digit + 48);
		}
		_putchar('\n');
	}
}
