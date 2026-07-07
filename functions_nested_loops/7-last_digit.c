#include "main.h"

/**
 * print_last_digit - returns and prints the last digit of a base 10 integer
 * @n: integer input
 *
 * Return: the last digit of n base 10
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (r >= 0)
	{
		_putchar('0' + r);
		return (r);
	}
	else
	{
		_putchar('0' - r);
		return (-r);
	}
}
