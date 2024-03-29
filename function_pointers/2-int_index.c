#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array of integers
 * @size: size of the array
 * @cmp: pointer to the function that compare values
 * Return: if the number matchs
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;


	if (array && size > 0 && cmp)
	{
		for (; i < size; i++)
			if ((cmp)(array[i]))
				return (i);
	}

	return (-1);
}
