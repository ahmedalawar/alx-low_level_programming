#include "main.h"
/**
*_strlen - returns the length of a string.
*@s: pointer that take the address of first char.
*Return: length of the array.
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
	s++;
	i++;
	}
	return (i);
}
