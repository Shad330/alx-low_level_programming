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
	char *st;
	unsigned int a, b, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	st = malloc(l1 + n + 1);
	if (st == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
		st[a] = s1[a];

	for (b = 0; b < n; b++)
	{
		st[b] = s2[b];
		a++;
	}
	st[a] = '\0';
	return (st);
}
