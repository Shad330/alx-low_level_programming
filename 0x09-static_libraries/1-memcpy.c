#include"main.h"

/**
 * _memcpy - copies number of ytes to a string
 * @dest: destination pointer
 * @src: Source Pointer
 * @n: unsigned integer that represnets the number of copies
 *
 * Return: wlways return 0
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int siz_i;

	for (siz_i = 0 ; siz_i < n ; siz_i++)
	dest[siz_i] = src[siz_i];
	return (dest);
}
