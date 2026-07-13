#include "main.h"

/**
 * swap_int - swaps integers at two addresses.
 * @a: pointer one
 * @b: pointer two
 *
 * Return: 0 always.
 */
int swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;

	return (0);
}
