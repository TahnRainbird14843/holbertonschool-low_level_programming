#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new struct dog with initialised data
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
