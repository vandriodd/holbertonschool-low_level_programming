#include "main.h"

/**
 * power - raises a number to the power of other
 * @x: base value
 * @y: power value
 *
 * Return: x raised to the power of y
 */
unsigned int power(int x, int y)
{
	unsigned int ans = 1;

	while (y > 0)
	{
		ans = ans * x;
		y--;
	}

	return (ans);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the binary number
 *
 * Return: the converted number, 0 if:
 * b is NULL or there are characters other than 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int uint = 0, len = 0, position = 0;

	if (!b)
		return (0);

	/* obtains len */
	while (b[len])
		len++;

	/* traverse through the number by decrementing the len */
	while (len--)
	{
		if (b[len] == '0')
			;
		else if (b[len] == '1')
			uint += power(2, position); /* value x 2^pos */
		else
			return (0);

		position++;
	}

	return (uint);
}
