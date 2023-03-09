#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, m; /* iterator & temp var */

	for (i = 0; i < (n / 2); i++)
	{
		m = a[i]; /* swap */
		a[i] = a[n - i - 1];
		a[n - i - 1] = m;
	}
}
