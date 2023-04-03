#include "main.h"

/**
 * _strpbrk - locates first bytes in s
 *
 * @s: string
 * @accept: pattern to check  against
 * Return: pointer to the first match
*/

char *_strpbrk(char *s, char *accept)
{
	int itt, jtt;

	for (itt = 0; s[itt] != '\0'; itt++)
	{
		for (jtt = 0; accept[jtt] != '\0'; jtt++)
		{
			if (s[itt] == accept[jtt])
				return (s + itt);
		}
	}
	return ('\0');
}
