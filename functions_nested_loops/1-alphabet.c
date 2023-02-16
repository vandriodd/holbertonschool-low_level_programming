#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: 0 if success
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);

	_putchar('\n');
}
