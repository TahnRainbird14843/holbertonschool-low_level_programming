#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate the first n chars of a string to another string
 * @s1: input string 1
 * @s2: input string 2
 * @n: number of chars to concat
 *
 * Return: pointer to concat, NULL if concat fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	if (len2 > n)
		ptr = malloc(len1 + n + 1);
	else
		ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}

	i = 0;
	while (i < len2 && i < n)
	{
		ptr[len1 + i] = s2[i];
		i++;
	}
	ptr[len1 + i] = '\0';

	return (ptr);
}
