/*
* File: 9-print_comb.c
* Auth: Ahmed Alawar
*/

#include <stdio.h>

/**
*main - prints all possible combinations of single-digit numbers.
*
*Return: Always (0).
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
putchar('\n');
return (0);
}
