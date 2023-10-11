#include "function_pointers.h"
/**
*int_index -  function that searches for an integer
*@array: array
*@size: number of elements in array
*@cmp: pointer to function
*Return: integar
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i] == true))
			{
				break;
				return (i);
			}
		}
	}
	return (-1);
