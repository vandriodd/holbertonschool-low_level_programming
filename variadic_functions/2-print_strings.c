#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *ptr; /* pointer to list of strs */
	va_list strList; /* list of strs */

	va_start(strList, n);

	for (; i < n; i++)
	{
		ptr = va_arg(strList, char *);

		if (i != 0 && separator != NULL)
			printf("%s", separator);

		if (ptr != NULL)
			printf("%s", ptr);
		else /* if a string is null, print nil */
			printf("(nil)");
	}
	printf("\n");

	va_end(strList);
}
