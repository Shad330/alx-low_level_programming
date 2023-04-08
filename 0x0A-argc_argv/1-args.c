#include <stdio.h>

/**
 *main - function that return the number of arguments
 *@argc:command line counts
 *@argv:arry of strings with the size of argc
 *Return: always 0
*/

int main(int argc, char const *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
