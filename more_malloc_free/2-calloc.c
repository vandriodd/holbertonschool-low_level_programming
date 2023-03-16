#include "main.h"

/**
 * _calloc - allocates memory and sets it to 0
 * @nmemb: number of elements to be allocated
 * @size: size of elements
 * Return: pointer to the mem allocated or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (!mem)
		return (NULL); /* case of failure */

	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0; /* the mem allocated is set to 0 */

	return (mem);
}
