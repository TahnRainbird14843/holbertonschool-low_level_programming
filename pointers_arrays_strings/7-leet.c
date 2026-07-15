#include "main.h"

/**
 * leet - converts a string into 1337
 * @str: input string
 *
 * Return: converted string
 */
char *leet(char *str)
{
	int base_arr[10];
	int leet_arr[10];
	int i = 0;
	int j;

	base_arr[0] = 'a';
	base_arr[1] = 'A';
	base_arr[2] = 'e';
	base_arr[3] = 'E';
	base_arr[4] = 'o';
	base_arr[5] = 'O';
	base_arr[6] = 't';
	base_arr[7] = 'T';
	base_arr[8] = 'l';
	base_arr[9] = 'L';

	leet_arr[0] = '4';
	leet_arr[1] = '4';
	leet_arr[2] = '3';
	leet_arr[3] = '3';
	leet_arr[4] = '0';
	leet_arr[5] = '0';
	leet_arr[6] = '7';
	leet_arr[7] = '7';
	leet_arr[8] = '1';
	leet_arr[9] = '1';

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == base_arr[j])
				str[i] = leet_arr[j];
		}
		i++;
	}

	return (str);
}
