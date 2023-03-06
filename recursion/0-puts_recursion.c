#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string input
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s); /* prints */
		_puts_recursion(s + 1); /* advance in the string */
	}
	else
		_putchar('\n');
}
