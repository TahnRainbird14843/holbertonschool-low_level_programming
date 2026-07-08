#include "main.h"

/**
 * print_diagonal - prints a diagonal line of length n
 * @n: length of diagonal
 *
 * Return: 0 always
 */
int print_diagonal(int n)
{
	int lines = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (lines < n)
		{
			int i;

			for (i = 0; i < lines; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');

			lines++;
		}
	}
}
