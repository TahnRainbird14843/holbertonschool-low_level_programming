#include "main.h"

/**
 * _memcpy - copies the first n bytes from source to dest
 * @dest: destination for copy
 * @src: source to be copied
 * @n: number of bytes to copy
 *
 * Return: destination of copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
