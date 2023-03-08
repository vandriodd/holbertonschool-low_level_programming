#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	for (argc = 0; argv[argc]; argc++) /* count args from 0 */
		printf("%s\n", argv[argc]); /* print args */
	return (0);
}
