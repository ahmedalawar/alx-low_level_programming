#include "main.h"

/*
*_strlen_recursion - Write a function that returns the length of a string.
*@s: pointer that takes the address of the string
*/

int _strlen_recursion(char *s)
{ 	
	int  i;
	
	i = 0;
	if(*s != '\0')
	{
		i++;
		return 1 + _strlen_recursion(s + 1);
	}
	return 0;
}
