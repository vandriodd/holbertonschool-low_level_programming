#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: determines the size of the triangle with #
 * Return: void
 */

void print_triangle(int size)
{
	int l, i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < size; l++)
		{
			for (i = size - l; i > 1; i--)
			{
				_putchar('\n');
			}

			for (k = 0; k <= l; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
