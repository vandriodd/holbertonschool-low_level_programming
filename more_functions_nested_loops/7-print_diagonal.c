#include "main.h"

/**
 * print_diagonal - draws a diagonal with n lenght
 * @n: number of times the character \ should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int l, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < n; l++)
		{
			for (i = 0; i < l; i++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
