#include "main.h"

/**
 * has_larger_divisor - checks if number has a larger divisor
 * @n: input int
 * @d: lower bound on divisor
 *
 * Return: 1 if no divisor, 0 otherwise
 */
int has_larger_divisor(int d, int n)
{
	if (n % (d + 1) == 0)
		return (0);
	if (d > n / 2)
		return (1);

	return (has_larger_divisor(d + 1, n));
}

/**
 * is_prime_number - checks if a number if prime
 * @n: input int
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (has_larger_divisor(1, n));
}
