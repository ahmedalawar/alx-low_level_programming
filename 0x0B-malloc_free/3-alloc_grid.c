#include "main.h"

/**
*alloc_grid - function that returns a pointer to
*		a 2 dimensional array of integers.
*@width: width of array
*@height: height of array
*Return: pointer of pointer
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int i, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array  = calloc(height, sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = calloc(width, sizeof(int));
	if (array[i] == NULL)
	{
		for (k = 0; k <= i; k++)
		{
			free(array[k]);
			free(array);
		}
		return (NULL);
	}
	}
	return (array);
}
