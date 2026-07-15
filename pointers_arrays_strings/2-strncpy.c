#include "main.h"

/**
 * _strncpy - copy string n times
 * @dest: destination for copy
 * @src: string to be copied
 * @n: number of times
 *
 * Result: pointer to destination
 */
char *_strncpy(char *dest, char *str, int n)
{
	int i = 0;

	while (str[i] != '\0' && dest[i] != '\0' && i < n)
	{
		dest[i] = str[i];
		i++;
	}

	while (dest[i] != '\0' && i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
