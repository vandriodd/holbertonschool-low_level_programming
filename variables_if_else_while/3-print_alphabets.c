#include <stdio.h>

/**
 * main - this program prints the alphabet in lowercase & then in uppercase
 *
 * Return: 0 if success
 */

int main(void)
{
	char a = 'a';
	char A = 'A';

	for (a; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (A; A <= 'Z'; A++)
	{
		putchar(A);
	}

	putchar('\n');
	return (0);
}
