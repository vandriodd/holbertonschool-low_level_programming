#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to concatenate to  
 * @src: input string
 * @n: number of elements to concatenate in
 * Return: pointer to the dest value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c; /* iterators for dest & src */

	for (i = 0; dest[i]; i++)
		;

	for (c = 0; src[c] && n > 0; c++, n--, i++)
		dest[i] = src[c];
	
	return (dest);
}
