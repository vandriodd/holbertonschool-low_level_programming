#include "main.h"

/**
 * print_square - prints a square
 * @size: determines the size of the square with #
 * Return: void
 */

void print_square(int size)
{
	int l, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < size; l++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
