#include "main.h"

/**
*alloc_grid - function that returns a pointer to a 2 dimensional array of integers.
*@width: width of array
*@height: height of array
*Return: pointer of pointer
*/

int **alloc_grid(int width, int height)
{
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array  = calloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
	array[i] = calloc(width * sizeof(int));
	}
	if (wid == NULL)
	{
		return (NULL);
	}
	if (hei == NULL)
	{
		return (NULL);
	}
	return (array);
}
