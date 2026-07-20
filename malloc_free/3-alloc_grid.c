#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory from a matrix
 * @width: matrix width
 * @length: matrix height
 *
 * Return: pointer to matrix decay
 */
int **alloc_grid(int width, int length)
{
	int **arr;
	int i = 0;
	int j = 0;

	arr = malloc(length * width * 4);

	while (i < length)
	{
		arr[i] = malloc(width * sizeof(int));
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}

		j = 0;
		i++;
	}

	return (arr);
}
