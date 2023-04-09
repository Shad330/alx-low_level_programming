#include <stdio.h>
#include <stdlib.h>

/**
 * main - functions that multplies 2 numbers
 *
 * @argc: command line count
 * @argv: array of strings
 * Return: int
*/

int main(int argc, char* argv[])
{
	int total;

	if (argc !== 3)
	{
		total = atoi(argv[1]) * atoi (argv[2]);
		printf("%d\n", total);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
