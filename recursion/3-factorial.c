#include "main.h"

/**
 * factorial - return factorial of input
 * @n: input int
 *
 * Return: 0 always
 */
int factorial(int n)
{
	int out = 1;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (out);

	out = n * factorial(n - 1);

	return (out);
}
