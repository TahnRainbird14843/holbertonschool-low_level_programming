#include <stdio.h>
#include "main.h"

/**
 * divide - adds two input integers
 *
 * Return: 0 always
 */
int divide(void)
{
	int a;
	int b;

	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);

	if (b != 0)
		printf("Result: %d\n", a / b);
	else
	{
		printf("Error: division by zero\n");
		divide();
	}

	return (0);
}
