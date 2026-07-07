#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 * 10 times
 *
 * Return: 0 always
 */
int print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		print_alphabet();
		count++;
	}

	return (0);
}
