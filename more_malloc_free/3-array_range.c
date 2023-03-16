#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to the newly array
 */

int *array_range(int min, int max)
{
	int *intArr, i;

	if (min > max)
		return (NULL);

	/* mem alloc for array range */
	intArr = malloc(sizeof(int) * ((max - min) + 1));

	/* case of failure */
	if (!intArr)
		return (NULL);

	for (i = 0; min <= max; i++)
		intArr[i] = min++; /* set values */

	return (intArr);
}
