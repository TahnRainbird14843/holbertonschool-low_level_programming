#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 for success
 */
int main(void)
{
	int i = 48;

	while (i < 58)
		putchar(i++);
	putchar('\n');

	return (0);
}
