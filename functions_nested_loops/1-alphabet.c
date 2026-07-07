#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 *
 * return: 0 always
 */
int print_alphabet(void)
{
	int i = 97;

	while (i < 123)
		_putchar(i++);
	_putchar(10);

	return (0);
}
