#include "main.h"

/**
 * main - prints the name of a program
 * @argc: count of the arguments
 * @argv: array of the arguments
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	/* if there is content */
	if (argc)
		/* the pointer pointing to the 1st place is printed */
		printf("%s\n", *argv);
	return (0);
}
