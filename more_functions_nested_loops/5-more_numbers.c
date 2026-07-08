#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14 ten times
 *
 * Return: 0 always
 */
int more_numbers(void)
{
	int i;
	int lines = 0;

	while (lines < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('1');
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
		lines++;
	}

	return (0);
}
