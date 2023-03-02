#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string input
 * Return: encoded string
 */

char *leet(char *c)
{
	char *s = c; /*  */
	int i; /* iterator */
	char letters[] = {97, 101, 111, 116, 108}; /*letters   */
	char numbers[] = {52, 51, 48, 55, 49}; /* */

	for (; *s; s++)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == letters[i] || *s == letters[i] - 32)
			{
				*s = numbers[i];
			}
		}
	}

	return (c);
}
