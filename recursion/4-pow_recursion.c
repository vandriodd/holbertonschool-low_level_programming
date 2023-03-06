#include "main.h"

/**
 * _pow_recursion - raises a base number to the power of other
 * @x: base value
 * @y: power value
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int num = x;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (num *= _pow_recursion(x, y - 1));
}
