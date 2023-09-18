#include "main.h"

/**
*print_rev - prints a string, in reverse, followed by a new line.
*@s: pointer that takes address of last element in string
*/
void print_rev(char *s)
{
	int i, j;
	
	i = 0;
	while (*s != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}

