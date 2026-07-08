#include "main.h"

/**
 * print_triangle - prints a triangle of given size
 * @size: size of triangle
 *
 * Return: 0 always
 */
int print_triangle(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			int space;
			int hash;

			for (space = 0; space < size - i - 1; space++)
				_putchar(' ');
			for (hash = 0; hash < i + 1; hash++)
				_putchar('#');

			_putchar('\n');
		}
	}

	return (0);
}
