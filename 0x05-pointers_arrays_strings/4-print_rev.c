#include "main.h"

/**
*print_rev - prints a string, in reverse, followed by a new line.
*@s: pointer that takes address of last element in string
*/
void print_rev(char *s)
{
	char *f = s;

	while (*s != '\0')
	{
		s++;
	}
	while (f != s)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}

