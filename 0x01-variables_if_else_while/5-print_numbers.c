#include <stdio.h>

/**
 * main -  C program to demonstrate putchar() method
 *
 * Return: Always o (success)
*/

int main(void)
{
	int ar;

	for (ar = 0; ar <= 9; ar++)
{
	putchar('0' + ar);
}
	putchar('\n');

	return (0);
}
