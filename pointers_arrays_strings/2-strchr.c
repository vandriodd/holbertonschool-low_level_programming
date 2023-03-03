#include "main.h"

/**
 * _strchr - locates a chat in a string
 * @s: string input
 * @c: char to be located
 * Return: pointer to the 1st occurrence if c exists, NULL if not
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
