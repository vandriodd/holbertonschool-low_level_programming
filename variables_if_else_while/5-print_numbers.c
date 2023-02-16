#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 if success
 */

int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
