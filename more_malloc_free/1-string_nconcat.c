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
	int len1 = 0;
	int len2 = 0;
	unsigned int i = 0;

	while (s1[len1] != '\0' && s1 != NULL)
		len1++;
	while (s2[len2] != '\0' && s2 != NULL)
		len2++;

	ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
		return (NULL);

	while (s1[i] != '\0' && s1 != NULL)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0' && s2 != NULL && i < n)
	{
		ptr[len1 + i] = s2[i];
		i++;
	}
	ptr[len1 + i] = '\0';

	return (ptr);
}
