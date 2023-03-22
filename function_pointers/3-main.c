#include "3-calc.h"

/**
 * main - manages the calculations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, 98 if not
 */

int main(int argc, char **argv)
{
	int (*f)(int a, int b);

	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}

	if (argc == 4)
	{
		f = get_op_func(argv[2]);
		printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
