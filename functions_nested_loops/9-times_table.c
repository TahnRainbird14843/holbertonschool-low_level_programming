#include "main.h"

/**
 * times_table - prints a multiplication table
 *
 * Return: 0 always
 */
int times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			if (((i * j) - ((i * j) % 10)) / 10 == 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + ((i * j) % 10));
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + ((i * j) - ((i * j) % 10)) / 10);
				_putchar('0' + ((i * j) % 10));
			}
		}
		_putchar('\n');
	}
	return (0);
}
