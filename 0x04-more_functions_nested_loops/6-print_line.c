#include "main.h"

/**
*print_line - draws a straight line in the terminal.
*
*@n: argument that takes length of line
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');

	}
	putchar('\n');

}
