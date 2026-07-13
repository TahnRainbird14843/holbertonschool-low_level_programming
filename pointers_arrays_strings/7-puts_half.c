#include "main.h"

/**
 * puts_half - prints the last half of a string
 * @s: string
 *
 * Return: 0 always
 */
int puts_half(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	int i;

	for (i = len / 2; i <= len; i++)
		_putchar(s[i]);
	_putchar('\n');

	return (0);
}
