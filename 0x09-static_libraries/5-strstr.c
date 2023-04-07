#include "main.h"

/**
 * _strstr - finds the first match  of the substring
 *
 * @haystack: string
 * @needle: substring to check
 * Return: pointer to the first match or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int itt, jtt, check;

	if (*needle == '\0')
		return (haystack);
	for (itt = 0; haystack[itt] != '\0'; itt++)
	{
		if (haystack[itt] == *needle)
		{
			for (jtt = 1; needle[jtt] != '\0'; jtt++)
			{
				if (needle[jtt] != haystack[itt + jtt])
				{
					check = 0;
					break;
				}
				check = 1;
			}
			if (check)
				return (haystack + itt);
		}
	}
	return ('\0');
}
