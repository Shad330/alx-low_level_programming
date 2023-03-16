#include <unistd.h>

/**
 * main - A program to print string into standrd error
 *
 * Return: 1 (not success)
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
