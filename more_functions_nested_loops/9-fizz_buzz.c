#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100 / multiplies of 3 & 5 prints Fizz & Buzz
 * @i: number to be checked
 * Return: 0 if success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 100)
		{
			if (((i % 3) == 0) && ((i % 5) == 0))
			{
				printf("FizzBuzz ");
			}
			else if (((i % 3) == 0))
			{
				printf("Fizz ");
			}
			else if (((i % 5) == 0))
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", i);
			}
		}
		else
		{
			printf("Buzz");
		}
	}

	printf("\n");
	return (0);
}
