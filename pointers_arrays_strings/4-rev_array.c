#include "main.h"

/**
 * reverse_array: reverses an array
 * @a: array to be reversed
 * @n: size of array
 *
 * Return: 0 always
 */
int reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}

	return (0);
}
