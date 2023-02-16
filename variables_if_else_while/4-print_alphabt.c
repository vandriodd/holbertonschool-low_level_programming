#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e
 *
 * Return: 0 if success
 */
int main(void)
{
	char a = 'a';

	for (a; a <= 'z'; a++)
	{

		if (a != 'q' && a != 'e')
			putchar(a);
	}

	putchar('\n');

	return (0);
}
