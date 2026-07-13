#include "main.h"

/**
 * rev_string - reverses a string in the same address
 * @s: string
 *
 * Return: 0 always
 */
int rev_string(char *s)
{
	int len = 0;
	int tmp;
	int i = 0;

	while (s[len] != '\0')
		len++;

	while (i < ((len - 1) / 2))
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
		i++;
	}

	return (0);
}
