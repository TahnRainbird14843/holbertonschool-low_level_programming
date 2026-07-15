#include "main.h"

/**
 * _strcat - concentatenate strings
 * @dest: destination to be concatenated
 * @str: string to concatenate at dest
 *
 * Return: pointer to concatenated string
 */
char *_strcat(char *dest, char *str)
{
	int len_d = 0;

	while (dest[len_d] != '\0')
		len_d++;

	int i = 0;

	while (str[i] != '\0')
	{
		dest[len_d + i] = str[i];
		i++;
	}

	dest[len_d + i] = '\0';

	return (dest);
}
