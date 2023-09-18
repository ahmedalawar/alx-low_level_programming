#include "main.h"

/**
*print_rev - prints a string, in reverse, followed by a new line.
*@s: pointer that takes address of last element in string
*/
void print_rev(char *s)
{
	char *f = s;

	while (*str != '\0')
	{
		str++;
	}
	while (f != str)
	{
		putchar(*str);
		str--;
	}
	putchar('\n')
}

