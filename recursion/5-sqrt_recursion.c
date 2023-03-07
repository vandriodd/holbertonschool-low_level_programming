#include "main.h"

/**
 * _sqrt_supp - checks if the input number haves a natural square roots
 * @n: number input
 * @i: root
 * Return: natural square root, -1 if otherwise
 */

int _sqrt_supp(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);

	return (_sqrt_supp(n, i + 1));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: point value
 * Return: the natural square root of n, if not return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_supp(n, 0));
}
