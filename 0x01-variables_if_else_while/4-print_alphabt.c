#include <stdio.h>

/**
 * main -  C program to demonstrate putchar() method
 *
 * Return: Always o (success)
*/

int main(void)
{
	char ch, e, q;

	e = 'e';
	q = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != q && ch != e)
{
	putchar(ch);
}
	}
	putchar('\n');
	return (0);
}
