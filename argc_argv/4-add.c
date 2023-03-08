#include "main.h"

/**
 * _supp - checks if the input is a digit
 * @n: input number
 * Return: 1 if n is number, 0 if otherwise
 */

int _supp(int n)
{
	if (n >= 48 && n <= 57) /* numbers 0 to 9 in ascii value */
		return (1);
	else
		return (0);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if success
 */

int main(int argc, char **argv)
{
	int i, n, result;

	for (i = 1; i < argc; i++) /* i = 1 to avoid the name of the program */
	{
		for (n = 0; argv[i][n]; n++)
		{
			if (!_supp(argv[i][n]))
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atoi(argv[i]); /* convert argv arguments in ascii values */
	}

	printf("%d\n", result);
	return (0);
}
