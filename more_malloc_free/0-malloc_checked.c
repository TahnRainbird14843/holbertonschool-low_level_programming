#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks if a memory allocation is valid and returns its address
 * @b: size of memory allocation
 *
 * Return: pointer to memory, 98 if failed.
 */
void *malloc_checked(unsigned int n)
{
	if (n == 0 || malloc(n) == NULL)
		exit(98);
	else
		return(malloc(n));
}
