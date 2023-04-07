#include "main.h"

/**
 * _strspn - gets the length of a given substring
 *
 * @s: string
 * @accept: pattern to be checked
 * Return: unsigned int to of bytes count
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ittr, jittr, lent = 0, count = 0;

	for (ittr = 0; s[ittr] != '\0'; ittr++)
	{
		for (jittr = 0; accept[jittr] != '\0'; jittr++)
		{
			if (s[ittr] == accept[jittr])
			{
				lent++;
				break;
			}
		}
		if (lent != 0)
			count++;
		if (count != lent)
			return (lent);
	}
	return (0);
}
