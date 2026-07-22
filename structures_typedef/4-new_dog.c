#include "dog.h"
#include <stdlib.h>

/**
 * alloc_ptr - allocate new pointer with malloc
 * @ptr: pointer to allocate
 *
 * Return: pointer to copy, or NULL if failed
 */
char *alloc_ptr(char *ptr)
{
	char *new_ptr;
	int len = 0;
	int i = 0;

	if (ptr == NULL)
		return (NULL);

	while (ptr[len] != '\0')
		len++;

	new_ptr = malloc(len + 1);
	if (new_ptr == NULL)
		return (NULL);

	while (i < len)
	{
		new_ptr[i] = ptr[i];
		i++;
	}
	new_ptr[i] = '\0';

	return (new_ptr);
}

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
	char *n_ptr;
	char *o_ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	n_ptr = alloc_ptr(name);
	if (n_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	o_ptr = alloc_ptr(owner);
	if (o_ptr == NULL)
	{
		free(n_ptr);
		free(ptr);
		return (NULL);
	}

	ptr->name = n_ptr;
	ptr->age = age;
	ptr->owner = o_ptr;

	return (ptr);
}
