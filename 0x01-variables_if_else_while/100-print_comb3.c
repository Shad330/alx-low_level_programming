#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int d1 = 0, d2;

	while (d1 <= 9)
	{
		d2 = 0;

		while (d2 <= 9)
		{
		if (d1 != d2 && d1 < d2)
		{
			putchar(d1 + '0');
			putchar(d2 + '0');

			if (d1 + d2 != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
		d2++;
		}
	d1++;
	}
	putchar('\n');

	return (0);
}
