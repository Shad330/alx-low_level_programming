#include"main.h"

/**
 * print_numbers  - C program to demonstrate putchar() method
 * Return: void
*/

void print_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar(digit + '0');
	}
	_putchar('\n');

}
