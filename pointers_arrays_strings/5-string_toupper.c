#include "main.h"

/**
 * string_toupper - changes lowercase char in uppercase
 * @s: string input
 * Return: string uppercase
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122) /* char lowercase ASCII */
		{
			s[i] -= 32; /* */ 
		}
	}

	return (s);
}
