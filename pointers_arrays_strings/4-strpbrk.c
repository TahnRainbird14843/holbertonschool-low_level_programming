#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - get the first character matching a set of accepted characters
 * @s: input string
 * @accept: accepted characters
 *
 * Return: pointer to firs accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}

		j = 0;
		i++;
	}

	return (NULL);
}
