#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: pointer to string input
 * Return: string capitalizated
 */

char *cap_string(char *c)
{
	/* iterator, i initializated for the 1st if */
	int n, i = 0;

	/* separator in ascii value */
	char sp[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (c[i] >= 97 && c[i] <= 122)
		c[i] -= 32; /* converts a lowercase char in uppercase */

	for (; c[i]; i++)
	{
		for (n = 0; sp[n]; n++)
		{
			if (c[i] == sp[n])
			{
				if (c[i + 1] >= 97 && c[i + 1] <= 122) /* changes the next char after the separator into uppercase */
				{
					c[i + 1] -= 32;
					break;
				}
			}
		}
	}

	return (c);
}
