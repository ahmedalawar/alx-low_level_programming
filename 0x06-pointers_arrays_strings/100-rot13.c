#include "main.h"
/**
**rot13 - a function that encodes a string using rot13.
*@a: pointer that takes code 
*Return: pointer with new encoded.
*/

char *rot13(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{

			a[i] = a[i] + 13;

		}
		i++;
	}
	return (a);
}
