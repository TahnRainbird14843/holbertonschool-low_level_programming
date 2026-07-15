#include "main.h"

/**
 * cap_string - capitalise words in a string
 * @str: input string
 *
 * Return: capitalised string
 */
char *cap_string(char *str)
{
	int i = 0;
	int sep_found = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '	' || str[i] == '\n'
			|| str[i] == ',' || str[i] == ';' || str[i] == '.'
			|| str[i] == '!' || str[i] == '?' || str[i] == '"'
			|| str[i] == '(' || str[i] == ')' || str[i] == '{'
			|| str[i] == '}')
		{
			sep_found = 1;
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z' && sep_found == 1)
		{
			sep_found = 0;
			str[i] += 'A' - 'a';
			i++;
		}
		else
		{
			sep_found = 0;
			i++;
		}
	}

	return (str);
}
