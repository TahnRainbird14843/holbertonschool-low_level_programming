#include "main.h"

/**
 * _isupper - chekcs if a character is upper case
 * @n: integer for ascii value of character
 *
 * Return: 1 if upper, 0 otherwise
 */
int _isupper(int n)
{
	if (n >= 'A' && n <= 'Z')
		return (1);
	else
		return (0);
}
