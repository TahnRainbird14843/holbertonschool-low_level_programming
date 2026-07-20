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

	while (str1[len1] != '\0')
		len1++;
	while (str2[len2] != '\0')
		len2++;

	out = malloc((len1 + len2) * sizeof(char) + 1);

	while (str1[i] != '\0' && str1 != NULL)
	{
		out[i] = str1[i];
		i++;
	}

	while (str2[j] != '\0' && str2 != NULL)
	{
		out[i + j] = str2[j];
		j++;
	}

	out[i + j] = '\0';
	
	if (str1 == NULL && str2 == NULL)
		return (NULL);

	return (out);
}
