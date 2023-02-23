#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: determines the size of the triangle with #
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			i = size - x;

			for (y = 1; y <= size; y++)
			{
				if (y >= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
