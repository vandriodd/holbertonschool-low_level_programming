#include "main.h"

/**
 * get_bit - obtains a bit at given index
 * @n: input number
 * @index: index of bit
 *
 * Return: value of a bit at index,
 * -1 in case of failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long) * 8) /* index exceeds valid size (bits) */
		return (-1);

	return ((n >> index) & 1); /* shift bits to index & return value */
}
