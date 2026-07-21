#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dogs info
 * @d: pointer to dog structure
 *
 * Return: 0 always
 */
int print_dog(struct dog *d)
{
	if (d == NULL)
		return (0);

	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	printf("Age: ");
	if (d->age <= 0.01)
		printf("(nil)\n");
	else
		printf("%.6f\n", d->age);

	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);

	return (0);
}
