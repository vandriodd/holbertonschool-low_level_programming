#include "main.h"

/**
 * create_array - creates and array of chars
 * @size: size of the array input
 * @c: a character
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i; /* iterator */
	char *arr; /* pointer to arr */

	if (!size) /* if isn't a valid size to allocate */
		return (NULL);

	/* size required for allocates the data */
	arr = malloc(sizeof(char) * size);

	if (!arr)
		return (NULL);

	/* (memset) copies determinated char to the arr that would be filled */
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
