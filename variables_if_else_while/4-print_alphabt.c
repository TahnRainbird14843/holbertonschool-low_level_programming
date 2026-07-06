#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 for success
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
	if (i != 101 && i != 113)
		putchar(i++);
	else
		i++;
	}
	putchar('\n');

	return (0);
}
