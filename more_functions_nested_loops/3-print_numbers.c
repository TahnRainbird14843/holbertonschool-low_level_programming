#include "main.h"

/**
 * print_numbers - print the numbers 1 to 9
 *
 * Return: 0 always
 */
int print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');

	return (0);
}
