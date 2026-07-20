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
	int a = 0;

	if (width <= 0 || length <= 0)
		return (NULL);

	arr = malloc(length * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	while (i < length)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			for (a = 0; a < i; a++)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
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
