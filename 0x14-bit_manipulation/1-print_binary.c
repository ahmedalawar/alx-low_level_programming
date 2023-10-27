#include "main.h"
/**
*print_binary - prints the binary representation of a number.
*@n: decimal num.
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
	unsigned long int i;
	bool start_printing = false;

	if (n == 0)
	{
		putchar('0');
	}
	else
	{
		for (i = 0; i < sizeof(n) * 8; i++)
		{
			if (start_printing)
			{
				if (n & mask)
					putchar('1');
				else
					putchar('0');
			}
			else if (n & mask)
			{
				start_printing = true;
					putchar('1');
			}
			mask = mask >> 1;
		}
	}
}
