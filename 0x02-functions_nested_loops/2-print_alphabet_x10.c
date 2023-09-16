#include "main.h"

/**
*print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
*			followed by a new line.
*/

void print_alphabet_x10(void)
{
	int i;
	int alpha;

	for (i = 0; i < 10; i++)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		putchar('\n');
	}
}
