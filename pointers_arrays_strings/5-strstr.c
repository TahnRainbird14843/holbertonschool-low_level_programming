#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurence of a substring in a string
 * @haystack: input string
 * @needle: subtring to be found
 *
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int found = 1;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				found = 0;
				break;
			}

			j++;
		}

		if (found == 1)
			return (haystack + i);
		found = 1;
		i++;
	}

	return (NULL);
}
