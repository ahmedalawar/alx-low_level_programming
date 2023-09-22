#include "main.h"
/**
*print_number - Write a function that prints an integer.
*@n: integar print 
*/

void print_number(int n)
{
	int lastdigit, 
	
	if (n < 0)
	{
		temp = -n;
		putchar('-')
	}
	else
	{
		temp = n;
	}
	number = temp;
	digit = 0;
	while (number >= 10)
	{
		lastdigit = n / 10;
		digit++;
	}
	digits = digit + 1;
	putchar(lastdigit + '0');
	
}
