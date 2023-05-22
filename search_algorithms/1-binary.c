#include "search_algos.h"

/**
 * binary_search - searches for a value in an array by dividing it
 * @array: pointer to array of integers
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value on match,
 * -1 on failure
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = 0, mid = 0;

	if (!array)
		return (-1);

	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
		print_array(array, low, high);

		if (array[mid] == value) /* case: value is in the mid */
			return (mid);
		else if (value > array[mid]) /* case: value is in the top half */
			low = mid + 1;
		else if (value < array[mid]) /* case: value is in the lower half */
			high = mid - 1;
	}
	return (-1);
}

/**
 * print_array - prints an array of integers
 * @array: pointer to array of integers
 * @low: lower half of the array
 * @high: top half of the array
*/
void print_array(int *array, size_t low, size_t high)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}
