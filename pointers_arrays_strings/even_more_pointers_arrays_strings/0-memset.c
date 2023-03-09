#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: array to set
 * @b: value to set it as
 * @n: number of bytes to be filled
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++) /* fill whole array with cap n bytes */
	{
		s[i] = b; /* sets the n bytes of s to the b char */
	}

	return (s);
}
