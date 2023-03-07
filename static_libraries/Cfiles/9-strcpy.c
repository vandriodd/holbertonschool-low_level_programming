#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: buffer pointed
 * @src: string pointed
 * Return: value of pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	/* pointer pointing to the beginning of the str */
	char *destnt = dest;

	while ((*destnt++ = *src++))
		;

	return (dest);
}
