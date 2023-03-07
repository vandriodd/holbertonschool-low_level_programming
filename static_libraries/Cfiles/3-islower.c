#include "main.h"

/**
 * _islower - checks if the character is lowercase
 * @c: the character to be checked
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
