#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments included
 * @n: arguments
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list argList; /* list of arguments */

	if (n == 0)
		return (0);

	va_start(argList, n); /* init list of args to iterate it */

	for (; i < n; i++)
		sum += va_arg(argList, int);

	va_end(argList);

	return (sum);
}
