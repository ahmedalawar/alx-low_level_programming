#include "main.h"

/**
*print_diagonal - draws a diagonal line on the terminal.
*
*@n: argument that print number of diagnol.
*/

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}

		putchar('\\');
		putchar('\n');
	}
	if (n <= 0)
		putchar('\n');
}
