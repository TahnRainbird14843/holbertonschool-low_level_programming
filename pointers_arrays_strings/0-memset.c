#include "main.h"

/**
 * _memset - places the character b in the first n bytes st destination s
 * @s: pointer to memory
 * @b: character input
 * @n: number of bytes to fill
 *
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
