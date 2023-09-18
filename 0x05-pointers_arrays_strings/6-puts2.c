#include "main.h"
/**
*puts2 - prints every other character of a string
*	starting with the first character,followed by a new line.
*@str: pointer
*/
void puts2(char *str)
{
	int i, len;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (i = 0; i <= len; i++)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');

}
