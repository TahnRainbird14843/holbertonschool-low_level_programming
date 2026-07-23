#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse to stdout
 * @s: string to print
 *
 * Return: 0 always
 */
int _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}

	return (0);
}
