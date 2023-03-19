#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int d1 = 0;
	int d2, d3;

	while (d1 <= 99)
	{
		d2 = d1;
		while (d2 <= 99)
		{
			if (d2 != d1)
			{
				putchar((d1 / 10) + '0');
				putchar((d1 % 10) + '0');
				putchar(' ');
				putchar((d2 / 10) + '0');
				putchar((d2 % 10) + '0');

				if (d1 != 98 || d2 != 99)
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
