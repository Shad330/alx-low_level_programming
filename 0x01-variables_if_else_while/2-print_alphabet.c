#include <stdio.h>

/**
 * main -  C program to demonstrate putchar() method
 *
 * Return: Always o (success)
*/

int main(void)
{
char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
	putchar('\n');

	return (0);
}
