#include "main.h"

/**
*_puts - prints a string, followed by a new line, to stdout.
*@str: pointer that takes the string.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str);
	str++;
	}
	putchar('\n');
}
