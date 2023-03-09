#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string that contains the chars to match
 * Return: pointer to the bytes that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s) /* count positions from the beginning */
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i]) /* match */
				return (s);
		}

		s++;
	}

	return ('\0');
}
