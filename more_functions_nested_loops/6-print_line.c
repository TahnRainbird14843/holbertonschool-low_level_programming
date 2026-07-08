#include "main.h"

/**
 * print_line - prints a line of _ of length n
 * @n: number of underscores
 *
 * Return: 0 always
 */
int print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');

	return (0);
}
