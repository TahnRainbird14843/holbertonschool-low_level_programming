#include "main.h"

/**
 * _puts - prints a string to stdout
 * @i: string
 *
 * Return: 0 always
 */
int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		_putchar(s[i++]);

	_putchar('\n');

	return (0);
}
