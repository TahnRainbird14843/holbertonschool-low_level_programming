#include "main.h"

/**
 * guessing - find the natural square root of a number
 * @n: input int
 * @guess: guess for square root
 *
 * Return: square root if it exists, -1 otherwise
 */
int guessing(int n, int guess)
{
	int new_guess = ((guess + (n / guess)) / 2);

	if (guess * guess == n)
		return (guess);
	else if (new_guess * new_guess == n)
		return (new_guess);
	else if (guess - new_guess <= 1 && new_guess - guess <= 1)
		return (-1);
	else
		return (guessing(n, new_guess));
}

/**
 * _sqrt_recursion - find the natural square root of an int
 * @n: input int
 *
 * Return: natural square root if it exists, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (guessing(n, n / 2));
}
