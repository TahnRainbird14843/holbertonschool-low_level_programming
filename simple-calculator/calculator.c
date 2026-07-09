#include <stdio.h>
#include "main.h"

/**
 * main - entry point for a simple calculator
 *
 * Description: This calculator has functionality for
 * addition, subtraction, multiplication, and division
 * but only supports expected integer inputs.
 *
 * Return: 0 always
 */
int main(void)
{
	int run = 1;
	int n;

	while (run == 1)
	{
		print_menu();
		scanf("%d", &n);

		if (n == 0)
		{
			printf("Bye!\n");
			run = 0;
		}
		else if (n == 1)
			add();
		else if (n == 2)
			subtract();
		else if (n == 3)
			multiply();
		else if (n == 4)
			divide();
		else
			printf("Invalid input\n");
	}

	return (0);
}
