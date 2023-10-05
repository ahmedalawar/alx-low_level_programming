#include "main.h"

/**
*create_array - function that creates an array of chars.
*		and initializes it with a specific char.
*@size: size of integar
*@c: character
*Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	arr[0] = c;
	return (arr);
}
