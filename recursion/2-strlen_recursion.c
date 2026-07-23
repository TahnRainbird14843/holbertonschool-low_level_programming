#include "main.h"

/**
 * _strlen_recursion - prints string length
 * @s: string input
 *
 * Return: 0 always
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[0] == '\0')
		return (0);

	len = _strlen_recursion(s + 1) + 1;

	return (len);
}
