#include "main.h"

/**
 * _memset - update the  memory with  constant input
 *
 * @s: pointer to string
 * @b: constant charachter
 * @n: first bytes to be changed
 *
 * Return: pointer to modified string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int icount;

	for (icount = 0; icount < n; icount++)
		s[icount] = b;
	return (s);
}
