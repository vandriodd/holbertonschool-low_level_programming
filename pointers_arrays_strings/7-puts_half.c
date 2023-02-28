#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints the half string
 * @str: string input
 * Return: void
 */

void puts_half(char *str)
{
	int n = (_strlen(str) - 1) / 2 + 1;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
