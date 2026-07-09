#include <stdio.h>
#include "main.h"

/**
 * multiply - adds two input integers
 *
 * Return: 0 always
 */
int multiply(void)
{
	int a;
	int b;

	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);

	printf("Result: %d\n", a * b);

	return (0);
}
