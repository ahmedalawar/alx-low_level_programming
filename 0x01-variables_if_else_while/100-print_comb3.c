/*
*File: 100-print_comb3.c
*Auth: Ahmed Alawar
*/
#include <stdio.h>
/**
*main -  prints all possible different combinations of two digits.
*
*Return: Always (0).
*/

int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1; num2 < 10; num2++)
		{
			if (num1 == num2)
				continue;
			else
			{	putchar('0' + num1);
				putchar('0' + num2);

			}

			if (num1 == 8)
			{	continue;
				}
				putchar(',');
				putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

