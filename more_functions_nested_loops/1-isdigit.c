#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @n: ascii code for input character
 *
 * Return: 1 if a digit, 0 otherwise
 */
int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}
