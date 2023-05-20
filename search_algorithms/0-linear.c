#include "search_algos.h"

/**
 * linear_search - searches for a value in an array by checking sequentially
 * @array: pointer to array of integers
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value on match,
 * -1 on failure
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i); /* return index */
		i++;
	}
	return (-1);
}
