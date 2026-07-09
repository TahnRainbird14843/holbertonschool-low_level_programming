#include <stdio.h>
#include "main.h"

/**
 * print_menu - prints the calculator menu
 *
 * Return: 0 always
 */
int print_menu(void)
{
        printf("Simple Calculator\n1) Add\n2) Subtract\n"
                "3) Multiply\n4) Divide\n0) Quit\nChoice: ");

        return (0);
}

/**
 * add - adds two input integers
 *
 * Return: 0 always
 */
int add(void)
{
        int a;
        int b;

        printf("A: ");
        scanf("%d", &a);
        printf("B: ");
        scanf("%d", &b);

        printf("Result: %d\n", a + b);

        return (0);
}

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

/**
 * main - entry point for a simple calculator
 *
 * Description: This calculator has functionality for addition, subtraction,
 * multiplication, and division but only supports expected integer inputs.
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
