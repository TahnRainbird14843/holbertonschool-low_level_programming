#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog structure
 * @d: dog to be freed
 *
 * Return: 0 always
 */
int free_dog(dog_t *d)
{
	if (d == NULL)
		return (0);

	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);

	return (0);
}
