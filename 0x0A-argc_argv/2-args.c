#include <stdio.h>

/**
 *main - function that return the number of arguments
 *@argc:command line counts
 *@argv:arry of strings with the size of argc
 *Return: int
*/

int main(int argc, char const *argv[])
{
	(void)argv;
	for (int i = 1; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
	return (0);
}
