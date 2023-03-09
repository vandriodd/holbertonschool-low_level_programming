#include "main.h"

/**
 * print_number - prints a number
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		n *= -1;
		num = n;
		_putchar('-');
	}

	num /= 10;

	if (num != 0)
		print_number(num);

	_putchar('0' + (unsigned int) n % 10);
}
