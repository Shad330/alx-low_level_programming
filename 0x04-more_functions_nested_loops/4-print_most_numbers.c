#include"main.h"

/**
 * print_most_numbers  - C program to demonstrate putchar() method
 * Return: void
*/

void print_most_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		if (digit != 2 || digit != 4)
		{
		_putchar(digit + '0');
		}
		else
		{
		_putchar('\n');
		}
	}

}
