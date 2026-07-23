#include "main.h"

/**
 * _puts_recursion - implement puts with _putchar recursively
 * @s: string to print to stdout
 *
 * Return: 0 always
 */
int _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return (0);
	}

	_putchar(s[0]);
	s++;
	_puts_recursion(s);

	return (0);
}
