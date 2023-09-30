#include "main.h"

/*
*_strlen_recursion - Write a function that returns the length of a string.
*@s: pointer that takes the address of the string
*/

int _strlen_recursion(char *s)
{ 	
	int  i;

	if(*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
