#include <stdio.h>

/**
 * main - prints the alphabet in lowercase & in reverse
 *
 * Return: 0 if success
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);

	putchar('\n');
	return (0);
}
