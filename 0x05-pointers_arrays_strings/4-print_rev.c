#include "main.h"

/**
*print_rev - prints a string, in reverse, followed by a new line.
*@s: pointer that takes address of last element in string
*/
void print_rev(char *s)
{
	int i, j, len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}

