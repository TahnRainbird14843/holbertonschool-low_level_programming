#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the first n elements of an array
 * @a: array
 * @n: number of elements to tbe printed
 *
 * Return: 0 always
 */
int print_array(int *a, int n)
{
	int i = 1;

	printf("%d", a[0]);
	while (i < n)
		printf(", %d", a[i++]);
	printf("\n");

	return (0);
}
