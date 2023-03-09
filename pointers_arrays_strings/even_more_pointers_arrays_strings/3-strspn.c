#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string in which chars of substring are searched
 * @accept: substring
 * Return: length of prefix of substring or 0 if not found
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, t;
	unsigned int n = 0; /* number of bytes */

	for (i = 0; s[i]; i++)
	{
		for (t = 0; s[t]; t++)
		{
			if (s[i] == accept[t])
			{
				n++;
				break;
			}
		}

		if (s[t] == '\0')
			return (n);
	}

	return (n);
}
