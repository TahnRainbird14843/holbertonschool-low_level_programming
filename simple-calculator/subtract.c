#include <stdio.h>
#include "main.h"

/**
 * subtract - subtracts two input integers
 *
 * Return: 0 always
 */
int subtract(void)
{
	int a;
	int b;

	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);

	printf("Result: %d\n", a - b);

	return (0);
}
