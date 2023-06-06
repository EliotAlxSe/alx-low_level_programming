#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of
 * square matrix of integers.
 * @a: integer
 * @size: The size
 *
 * Return: 0 Always
 */

void print_diagsums(int *a, int size)
{
	int i, n;
	int sum_ = 0, sum__ = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum_ += a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum__ += a[n];
	printf("%d, %d\n", sum_, sum__);
}
