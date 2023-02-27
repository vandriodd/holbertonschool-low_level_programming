#include "main.h"

/**
 * puts2 - prints every other char of a str with the first char
 * @str: string input
 * Return: void
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}

	_putchar('\n');
}
