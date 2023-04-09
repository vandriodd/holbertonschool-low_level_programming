#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: input number
 * @index: given index
 *
 * Return: 1 if success,
 * -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long) * 8)
		return (-1);

	*n &= ~(1 << index); /* puts 0 in the index position */

	return (1);
}
