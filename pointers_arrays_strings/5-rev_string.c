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

	while (s[len] != '\0')
		len++;

	char tmp[len];
	int i = 0;

	while (s[i] != '\0')
		tmp[i] = s[i++];

	int j;

	for (j = 0; j < len; j++)
		s[j] = tmp[len - j];
	s[len] = '\0';

	return (0);
}
