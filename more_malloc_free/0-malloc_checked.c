#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks if a memory allocation valid and returns its address
 * @n: size of memory allocation
 *
 * Return: pointer to memory, 98 if failed.
 */
void *malloc_checked(unsigned int n)
{
	void *ptr;

	if (n == 0)
		exit(98);

	ptr = malloc(n);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
