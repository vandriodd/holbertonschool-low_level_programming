#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size to allocate
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = NULL;
w
	p = malloc(b);

	if (!b)
		exit(98);

	return (p);
}
