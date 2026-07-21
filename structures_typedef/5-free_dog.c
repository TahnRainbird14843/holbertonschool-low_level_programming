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
	free(d);

	return (0);
}
