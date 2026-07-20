#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
	int len = strlen(str1) + strlen(str2);

	out = malloc(len * sizeof(char));

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

	return (out);
}
