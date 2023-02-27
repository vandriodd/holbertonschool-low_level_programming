#include "main.h"

/**
 * rev_string - reverses a string
 * @s: str input
 * Return: void
 */

void rev_string(char *s)
{
	int c = 0; /* counter (length) */
	int r = 0; /* reverse */
	int i; /* characters */

	while (s[c]) /* obtains the length of the str */
		c++;

	for (i = 0; i < c; i++)
	{
		c--;
		r = s[i]; /* swap */
		s[i] = s[c];
		s[c] = r;
	}
}
