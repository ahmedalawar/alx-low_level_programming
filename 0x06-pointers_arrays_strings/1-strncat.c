#include "main.h"
/**
**_strncat -  function that concatenates two strings.
*@dest: pointer indicate to destination
*@src: pointer indicate to source
*@n: integar which select number of conctination
*Return: dest pointer.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j, y;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		j++;
	}
	for (y = j; y < (j + n); y++)
	{
		dest[y] = *src;
		src++;
	}
	dest[y] = '\0';
	return (dest);
}
