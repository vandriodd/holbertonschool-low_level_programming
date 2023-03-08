#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if success
 */

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3) /* if argc doesn't contains both numbers */
	{
		printf("Error");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]); /* convert n1 from char to int */
		num2 = atoi(argv[2]); /* convert n2 from char to int */
		result = num1 * num2; /*and finally, multiplies */
		printf("%d\n", result);
		return (0);
	}
}
