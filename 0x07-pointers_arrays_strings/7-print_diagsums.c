#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sums of both diagonals of a square matrix.
 * @a: square matrix stored as a one-dimensional array.
 * @size: number of rows and columns.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int primary = 0;
	int secondary = 0;

	for (i = 0; i < size; i++)
	{
		primary += a[i * size + i];
		secondary += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", primary, secondary);
}
