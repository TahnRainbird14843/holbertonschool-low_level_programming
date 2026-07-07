#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 * 10 times
 *
 * Return: 0 always
 */
int print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		int i;

		for (i = 0; i < 26; i++)
			_putchar('a' + i);
		_putchar('\n');
		count++;
	}

	return (0);
}
