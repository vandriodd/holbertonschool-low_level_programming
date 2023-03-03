#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination area to copy to
 * @src: source area to copy from
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]; /* copies memory of src to dest */
	}

	return (dest);
}
