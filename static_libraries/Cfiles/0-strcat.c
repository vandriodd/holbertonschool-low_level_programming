#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to concatenate to
 * @src: string input
 * Return: pointer to dest value
 */

char *_strcat(char *dest, char *src)
{
	int i, n; /* iterator for dest & src */

	for (i = 0; dest[i]; i++)
		;

	for (n = 0; src[n]; n++)
	{
		dest[i] = src[n];
		i++;

	}

	return (dest);
}
