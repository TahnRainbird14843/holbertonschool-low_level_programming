#include "main.h"

/**
 * _strncat - concentatenate strings up to n characters
 * @dest: destination to be concatenated
 * @str: string to concatenate at dest
 * @n: number of characters to concatenate
 *
 * Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *str, int n)
{
	int len_d = 0;
	int i = 0;

	while (dest[len_d] != '\0')
		len_d++;

	while (str[i] != '\0' && i < n)
	{
		dest[len_d + i] = str[i];
		i++;
	}

	dest[len_d + i] = '\0';

	return (dest);
}
