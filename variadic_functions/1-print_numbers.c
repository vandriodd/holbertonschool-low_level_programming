#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num = 0;
	va_list numList; /* list of numbers */

	va_start(numList, n);

	for (; i < n; i++)
	{
		num = va_arg(numList, int);

		if (i != 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", num);
	}
	printf("\n");

	va_end(numList);
}
