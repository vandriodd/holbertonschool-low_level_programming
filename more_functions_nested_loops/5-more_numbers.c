#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int c, d, i;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d < 15; d++)
		{
			if (d < 10)
			{
				i = d;
			}
			else
			{
				i = d / 10;
			}

			_putchar('0' + i);

			if (d > 9)
				_putchar('0' + (d % 10));
		}
		_putchar('\n');
	}
}
