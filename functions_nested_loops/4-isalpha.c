#include "main.h"

/**
 * _isalpha - checks if a character is a letter
 * @c: ASCII value of character
 *
 * Return: 1 if a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
