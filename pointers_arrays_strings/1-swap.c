#include "main.h"

/**
 * swap_int - swaps te value of two integers
 * @a: pointer w/ address a
 * @b: pointer w/ address b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
