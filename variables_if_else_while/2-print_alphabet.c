#include <stdio.h>

/**
 * main - this program prints the alphabet in lowercase
 *
 * Return: 0 if success
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
