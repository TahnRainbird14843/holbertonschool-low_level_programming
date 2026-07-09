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
	int addvalid_a;
        int addvalid_b;

        printf("A: ");
        addvalid_a = scanf("%d", &a);
        if (check_input(addvalid_a) == 0)
                add();
        printf("B: ");
        addvalid_b = scanf("%d", &b);
        if (check_input(addvalid_b) == 0)
                add();

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
	int subvalid_a;
        int subvalid_b;

        printf("A: ");
        subvalid_a = scanf("%d", &a);
        if (check_input(subvalid_a) == 0)
                subtract();
        printf("B: ");
        subvalid_b = scanf("%d", &b);
        if (check_input(subvalid_b) == 0)
                subtract();

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
	int mulvalid_a;
	int mulvalid_b;
	
	printf("A: ");
	mulvalid_a = scanf("%d", &a);
	if (check_input(mulvalid_a) == 0)
		multiply();
	printf("B: ");
	mulvalid_b = scanf("%d", &b);
	if (check_input(mulvalid_b) == 0)
		multiply();

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
	int divvalid_a;
	int divvalid_b;

	printf("A: ");
        divvalid_a = scanf("%d", &a);
	if (check_input(divvalid_a) == 0)
		divide();
        printf("B: ");
        divvalid_b = scanf("%d", &b);
	if (check_input(divvalid_b) == 0)
		divide();

        if (b != 0)
                printf("Result: %d\n", a / b);
        if (b == 0)
        {
                printf("Error: division by zero\n");
                divide();
        }

        return (0);
}

/**
 * check_input - checks if the input is a valid integer
 *
 * Return: 0 always
 */
int check_input(int n)
{
	if (n == 0)
	{
		while (getchar() != '\n');
		printf("Invalid input\n");
		return (0);
	}
	else
		return (1);
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
	int valid;

	while (run == 1)
	{
		print_menu();
		valid = scanf("%d", &n);

		if (valid == 0)
		{
			while(getchar() != '\n');
			printf("Invalid choice\n");
			main();
		}
		else if (n == 0)
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
