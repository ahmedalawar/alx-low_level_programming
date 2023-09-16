#include "main.h"

/**
*print_sign - prints the sign of a number.
*
*@n: argument that takes number.
*Return: 0, 1 or -1.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return(0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
