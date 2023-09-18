#include "main.h"
/**
**_strcpy -  copies the string pointed to by src
*	including the terminating null byte (\0),
*	to the buffer pointed to by dest.
*@dest: destention will copied to.
*@src: source copied from.
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int len_src, i;

	len_src = 0;
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	for (i = 0; i < len_src; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
