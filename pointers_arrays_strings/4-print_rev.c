#include "main.h"

/**
 * print_rev - prints a string in reverse to stdout
 * @s: string
 *
 * Return: 0 always
 */
int print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i >= 0)
		_putchar(s[i--]);

	_putchar('\n');

	return (0);
}
