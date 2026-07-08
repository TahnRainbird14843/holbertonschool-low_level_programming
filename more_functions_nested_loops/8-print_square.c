#include "main.h"

/**
 * print_square - prints a square of size n
 * @n: side length of square
 *
 * Return: 0 always
 */
int print_square(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar(35);
			_putchar('\n');
		}
	}

	return (0);
}
