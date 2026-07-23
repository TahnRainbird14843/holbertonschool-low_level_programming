#include "main.h"

/**
 * _pow_recursion - returns x^y
 * @x: base of power
 * @y: exponent
 *
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	int out = 1;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	out = x * _pow_recursion(x, y - 1);
}
