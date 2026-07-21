#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for a number of elements of any size
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to memory if successful, 0 otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	while (i < nmemb * size)
		ptr[i++] = '\0';

	return (ptr);
}
