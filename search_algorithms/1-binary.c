#include "search_algos.h"

/**
 * binary_search - aaaaaa
 * @array: pointer to array of integers
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value on match,
 * -1 on failure
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, low = 0, high = 0, mid = 0;

	if (!array)
		return (-1);

	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");
		
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
	}
	return (-1);
}


/**
 * printArray - prints an array of integers
 * @dd:
 * @ddddd:
*/
/*
void print_array(int *array, size_t low, size_t high)
{
	size_t i = 0;

	printf("Searching in array: ");
	while (i <= right)
	{
		if ()
		{}
	}
}
*/
