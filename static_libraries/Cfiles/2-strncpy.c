#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string where src will be copied to
 * @src: string to be copied
 * @n: number of elements
 * Return: string input copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
		{
			break;
		}
	}

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
