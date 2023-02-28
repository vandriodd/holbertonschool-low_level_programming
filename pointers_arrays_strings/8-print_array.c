#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array input
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (*a && i < n - 1)
	{
		printf("%d, ", *a++);
		i++;
	}

	printf("%d\n", *a++);
}
