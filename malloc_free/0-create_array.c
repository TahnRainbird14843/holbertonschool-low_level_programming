#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a variable size array initialised with a character
 * @size: size of array
 * @c: character to initialise array
 *
 * Return: pointer to beginning of array
 */
char *create_array(unsigned int size, char c)
{
	char *out;
	int i = 0;

	out = malloc(size * sizeof(char));

	while (i < size)
		out[i++] = c;

	return (out);
}
