#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise a dog structure with given info
 * @d: pointer to dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: 0 always
 */
int init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (0);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (0);
}
