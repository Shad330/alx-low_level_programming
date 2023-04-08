#include <stdio.h>

/**
 *main - function that return the number of arguments
 *@argc:command line counts
 *@argv:arry of strings with the size of argc
 *Return: int
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
