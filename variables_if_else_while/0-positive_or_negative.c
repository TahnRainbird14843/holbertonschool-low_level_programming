#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Produces a random integer and prints its sign
 *
 * Return: 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is 0\n", n);

	return (0);
}
