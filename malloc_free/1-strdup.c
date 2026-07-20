#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a duplicate of a given string
 * @str: string to duplicate
 *
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *out;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	out = malloc(i * sizeof(char) + 1);

	if (out == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		out[i] = str[i];
		i++;
	}

	out[i] = '\0';

	return (out);
}
