#include"main.h"

/**
 * print_line - C program to demonstrate putchar() method
 * @n: integer used in the program
*/

void print_line(int n)
{
	int lent;

	for (lent = 1; lent <= n; lent++)
		_putchar('_');
	_putchar('\n');
}
