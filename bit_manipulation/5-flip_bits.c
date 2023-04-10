#include "main.h"

/**
 * flip_bits - checks how many bits need to be changed to change the number
 * @n: 1st input number
 * @m: 2nd input number
 *
 * Return: number of bits required to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = n ^ m; /* bit difference */
	unsigned int to_change = 0; /* total amount to be changed */

	while (bits)
	{
		to_change += bits & 1; /* check the bits to change with value 1 */
		bits >>= 1;
	}

	return (to_change);
}
