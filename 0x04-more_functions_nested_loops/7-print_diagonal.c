#include"main.h"

/**
 * print_diagonal -  C program to demonstrate putchar() method
 * @n: integer used in the program
*/

void print_diagonal(int n)
{
	int lent;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (lent = 1; lent <= n; lent++)
			_putchar(92);
	}
		_putchar('\n');
}
