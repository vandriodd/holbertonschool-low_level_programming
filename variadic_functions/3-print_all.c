#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: argument received
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int)); /* ascii value ig */
}

/**
 * print_integer - prints an integer
 * @args: argument received
 */
void print_integer(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: argument received
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: argument received
 */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: type of argument passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, n = 0;
	char *ptr = ""; /* separator */

	format_t form[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	}; /* sets the valid formats */

	va_start(args, format);

	while (format && format[n])
	{
		i = 0;
		while (i < 4)
		{
			/* if the format passed is valid */
			/* (matches those in the form[])*/
			if (form[i].c[0] == format[n])
			{
				printf("%s", ptr);
				ptr = ", ";
				form[i].f(args);
			}
			i++;
		}
		n++;
	}
	printf("\n");
	va_end(args);
}
