#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the diagonal sums of a square matrix
 * @a: square matrix
 * @size: size of matrix
 *
 * Return: 0 always
 */
int print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];
		sum2 += a[size - 1 + i * (size - 1)];
		i++;
	}

	printf("%d, %d\n", sum1, sum2);

	return (0);
}
