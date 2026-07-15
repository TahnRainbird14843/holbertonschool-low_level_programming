#include "main.h"

/**
 * string_toupper - converts any lowercase characters to uppercase
 * @str: input string
 *
 * Return: string in upper case
 */
char *string_toupper(char *str)
{
	int i = i;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += 'A' - 'a';
		i++;
	}

	return (str);
}
