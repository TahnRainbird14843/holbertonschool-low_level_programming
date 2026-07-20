#include "main.h"
#include <stdlib.h>

/**
 * str_concat - points to new string which is the concatenation of the inputs
 * @str1: string input 1
 * @str2: string input 2
 *
 * Return: pointer to concatenated strings.
 */
char *str_concat(char *str1, char *str2)
{
	char *out;
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;

	if (str1 != NULL)
	{
		while (str1[len1] != '\0')
			len1++;
	}
	if (str2 != NULL)
	{
		while (str2[len2] != '\0')
			len2++;
	}

	if (str1 == NULL && str2 == NULL)
		return (NULL);

	out = malloc((len1 + len2) * sizeof(char) + 1);

	if (out == NULL)
		return (NULL);

	while (i < len1)
	{
		out[i] = str1[i];
		i++;
	}
	while (j < len2)
	{
		out[i + j] = str2[j];
		j++;
	}
	out[i + j] = '\0';

	return (out);
}
