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
	int i;

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
		free_2D_array(array, height);
		return (NULL);
	}
	}
	return (array);
}
/**
*free_2D_array - to free allocating memory
*@array: pointer to 2darray
*@height: number of colums in array
*/
void free_2D_array(int **array, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(array[i]);
	}
	free(array);
}
