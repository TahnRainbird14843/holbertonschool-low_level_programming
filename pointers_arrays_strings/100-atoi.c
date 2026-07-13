#include "main.h"

/**
 * atoi - takes a string and converts it to a signed integer
 * @s: input string
 *
 * Return: converted number
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int run = 1;
	int found_num = 0;

	while (s[i] != '\0' && run == 1)
	{
		if (s[i] == '-')
		{
			sign = -sign;
			i++;
		}
		else if (s[i] >= '0' && s[i]  <= '9')
		{
			found_num = 1;
			result = 10 * result - (s[i] - '0');
			i++;
		}
		else if (found_num == 1)
		{
			run = 0;
			i++;
		}
		else
			i++;
	}

	return (-sign * result);
}
