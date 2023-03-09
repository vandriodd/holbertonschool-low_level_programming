#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of matrix
 * @a: matrix
 * @size: size of diagonal
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i; /* iterator */
	int mdiag = 0;
	int odiag = 0;

	for (i = 0; i < size; i++)
	{
		mdiag += a[(i * size) + i]; /* main diagonal sum */
		odiag += a[(size - 1) + ((size - 1) * i)]; /* off diagonal sum */

	}

	printf("%d, %d\n", mdiag, odiag);
}
