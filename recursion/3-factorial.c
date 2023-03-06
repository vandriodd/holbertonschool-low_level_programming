#include "main.h"

/**
 * factorial - factorial number definition
 * @n: number to be checked
 * Return: -1 if n is lower than 0, factorial if not
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
