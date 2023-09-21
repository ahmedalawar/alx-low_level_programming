#include "main.h"
/**
**string_toupper - function that changes all lowercase
*			letters of a string to uppercase.
*@a: address that contain lower case
*Return: address of the upper case
*/

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		a[i] = toupper(a[i]);
		i++;
	}
	return (a);
}
