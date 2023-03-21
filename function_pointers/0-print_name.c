#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the function
 * @f: pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	if (!name)
		return;
	(f)(name); /* invokes the func */
}
