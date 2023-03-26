#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct formats - struct to print any type of variable
 * @c: variable format (% in printf)
 * @f: func pointer that points to the function corresponding to the var format
 */
typedef struct formats
{
	char *c;
	void (*f)(va_list args);
} format_t;

/* Prototypes */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
