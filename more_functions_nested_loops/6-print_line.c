#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times "_"
 * Return: void
 */

void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
