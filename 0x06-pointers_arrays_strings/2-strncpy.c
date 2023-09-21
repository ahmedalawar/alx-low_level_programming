#include "main.h"
/**
**_strncpy - function that copies a string.
*@dest: pointer that indicate to the destination.
*@src: pointer that indicates to the source.
*@n: integer that select the length of the word.
*Return: pointer dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
