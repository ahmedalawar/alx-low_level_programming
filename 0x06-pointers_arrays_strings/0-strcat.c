#include "main.h"
/**
**_strcat - function that concatenates two strings.
*@dest: pointer indicate to destination.
*@src: pointer indicate to source.
*Return: pointer.
*/
char *_strcat(char *dest, char *src)
{
	int i, j, y;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	printf("i = %d\n ", i);
	while (src[j] != '\0')
	{
		j++;
	}
	printf("j = %d \n", j);
	for (y = i; y < (i + j); y++)
	{
		dest[y] = *src;
		src++;
	}
	return (dest);
}
