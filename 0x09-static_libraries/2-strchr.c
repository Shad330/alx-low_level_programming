#include"main.h"

/**
 *_strchr - function that returns the position of an intended character
 *@s: a string used in the function
 *@c: the charchter needed to be tracked
 *
 * Return: charchter positon if found and NULL if not
*/

char *_strchr(char *s, char c)
{
	int itt;

	for (itt = 0 ; s[itt] >= '\0' ; itt++)
	{
		if (s[itt] == c)
		{
		return (s + itt);
		}
	}
	return ('\0');
}
