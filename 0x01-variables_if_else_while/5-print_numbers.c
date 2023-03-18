#include <stdio.h>

/**
 * main -  C program to demonstrate putchar() method
 *
 * Return: Always o (success)
*/

int main(void)
{
	int ar;

	for (ar = '0'; ar <= 10; ar++)
{
	putchar(ar);
}
	putchar('\n');

	return (0);
}
