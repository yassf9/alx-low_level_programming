#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: integer
 * @height: integer
 * Return: NULL (failure or negative input), pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) *  width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
