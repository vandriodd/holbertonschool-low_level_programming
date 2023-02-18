#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * @x,y: axis
 * @i,n: integers
 * Return: 9 times table
 */

void times_table(void)
{
	int x, y, r;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			r = y * x;

			if (r > 9)
			{
				_putchar(' ');
				_putchar('0' + (r / 10));
				_putchar('0' + (r % 10));
			}
			else if (x != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + r);
			}
			else
			{
				_putchar('0' + r);
			}


			if (x < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
