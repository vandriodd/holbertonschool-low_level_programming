#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char input
 * Return: length of the input string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}
