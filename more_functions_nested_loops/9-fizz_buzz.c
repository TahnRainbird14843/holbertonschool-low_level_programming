#include <stdio.h>

/**
 * main - entry point, completes fizz buzz
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		putchar(' ');
	}

	printf("Buzz\n");

	return (0);
}
