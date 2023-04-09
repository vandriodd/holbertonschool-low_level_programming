#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: input number
 * @index: given index
 *
 * Return: 1 if success,
 * -1 is error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long) * 8)
		return (-1);

	*n |= 1 << index; /* adds 1 in the index position */

	return (1);
}
