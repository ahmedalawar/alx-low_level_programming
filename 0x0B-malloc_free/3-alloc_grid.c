#include "main.h"

/**
*alloc_grid - function that returns a pointer to a 2 dimensional array of integers.
*@width: width of array
*@height: height of array
*Return: pointer of pointer
*/

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	int *wid = calloc(width * sizeof(int));
	int *hei = calloc(height * sizeof(int));
	if (wid == NULL)
	{
		return (NULL);
	}
	if (hei == NULL)
	{
		return (NULL);
	}


}
