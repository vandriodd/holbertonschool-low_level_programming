#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action) /* if both are valid values */
	{
		if (size > 0)
			for (; i < size; i++)
				(action)(array[i]); /* it takes the parameters & sends them to the func */
	}
}
