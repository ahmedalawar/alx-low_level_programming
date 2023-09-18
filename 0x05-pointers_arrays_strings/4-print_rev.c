#include "main.h"

/**
*print_rev - prints a string, in reverse, followed by a new line.
*@s: pointer that takes address of last element in string
*/
void print_rev(char *s)
{
	char *f = s;

	f--;
	while (*s != '\0')
	{
		s++;
	}
	s--;
	do {
		putchar(*s);
		s--;
	} while (f != s);
	putchar('\n');
}

