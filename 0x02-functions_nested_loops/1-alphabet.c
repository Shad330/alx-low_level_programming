#include "main.h"
/**
 * print_alphabet -  C program to demonstrate putchar() method
 *
 * Return: Always o (success)
*/

int print_alphabet(void)
{
char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);
}
	_putchar('\n');

	return (0);
}
