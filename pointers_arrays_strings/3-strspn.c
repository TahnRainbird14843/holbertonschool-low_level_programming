#include "main.h"

/**
 * _strspn - find number of initial bytes consisting of a set of letters
 * @s: input string
 * @accept: accepted characters
 *
 * Return: number of matching bytes
 */
int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int count = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count = count + 1;
				found = 1;
			}
			j++;
		}

		if (found == 0)
			break;
		found = 0;
		j = 0;
		i++;
	}

	return (count);
}
