#include "main.h"

/**
*malloc_checked - function that allocates memory using malloc
*@b: integar that indicates number of bits
*Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
