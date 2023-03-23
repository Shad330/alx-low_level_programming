#include"main.h"

/**
 * print_diagonal -  C program to demonstrate putchar() method
 * @n: integer used in the program
*/

void print_diagonal(int n)
{
	int pos, lent;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (pos = 1; pos <= n; pos++)
		{
			for (lent = 1; lent <= pos; lent++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
