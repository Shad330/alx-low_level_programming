#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - function that concatinates 2 strings
 * @s1: pointer to string of type char
 * @s2: pointer to string of type char
 * @n: lentgh of string 2
 * Return: string of type char, or null in case it fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, k, len1, len2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	len1 = 0;
	while (*(s1 + len1))
		len1++;
	len2 = 0;
	while (*(s2 + len2))
		len2++;
	if (n >= len2)
		n = len2;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == 0)
		return (0);
	for (i = 0; i < len1; i++)
		*(str + i) = *(s1 + i);
	for (k = 0; k < n; k++, k++)
		*(str + i) = *(s2 + k);
	*(str + i) = '\0';
	return (str);
}
