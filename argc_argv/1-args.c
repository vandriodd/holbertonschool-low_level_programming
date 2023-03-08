#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: count of the arguments
 * @argv: array of the arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	for (; argv[argc]; argc++) /* count args */
		;
	argc--; /* avoid the name of the program (argc[0]) */

	printf("%d\n", argc); /* print number of arguments */
	return (0);
}
