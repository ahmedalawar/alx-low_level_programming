#include "main.h"

/**
* print_alphabet - prints the alphabet, in lowercase.
*			followed by a new line.
*/

void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
