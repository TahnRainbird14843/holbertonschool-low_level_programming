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

	len--;

	while (i < len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		i++;
		len--;
	}

	return (0);
}
