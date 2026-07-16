#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns a pointer to the first occurence of character
 * @s: initial pointer
 * @c: character to look for
 *
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return (NULL);
}
