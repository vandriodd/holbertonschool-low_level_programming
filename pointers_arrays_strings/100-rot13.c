#include "main.h"

/**
 * rot13 - encrypt a string in ROT13 ("rotate by 13 places")
 * @s: string input
 * Return: encrypted string
 */

char *rot13(char *s)
{
	int i, n; /* iterators */
	/* alphabet */
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	/* inverse alphabet */
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (n = 0; input[n]; n++)
		{
			if (s[i] == input[n])
			{
				s[i] = output[n]; /* replaces 13 places further; ROT13(ROT13(n)) */
				break;
			}
		}
	}

	return (s);
}
