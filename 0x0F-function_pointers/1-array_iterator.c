#include "function_pointers.h"
/**
*array_iterator - executes a function given as
*a parameter on each element of an array.
*@array: pointer of int.
*@size: size of the array
*@action: is a pointer to the function you need to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL && array != NULL)
	{	size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
