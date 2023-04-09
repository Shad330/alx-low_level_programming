#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 *
 * @argc: command lines count
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	int x, y, total;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!((argv[x][y] >= '0' && argv[x][y] <= '9') || argv[x][y] == '-'))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[x]);
	}
	printf("%d\n", total);
	return (0);
}
