/*
*File: 101-print_comb4.c
*Auth: Ahmed Alawar
*/

#include <stdio.h>

/**
*main - prints all possible different combinations of three digits.
*	Numbers must be separated by ,, followed by a space
*	The three digits must be different
*	012, 120, 102, 021, 201, 210 are considered
*	the same combination of the three digits 0, 1 and 2
*	Print only the smallest combination of three digits
*	Numbers should be printed in ascending order, with three digits
*
*Return: Always (0).
*/

int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1; num2 < 10; num2++)
		{
			for (num3 = num2; num3 < 10; num3++)
			{
				if (num1 == num2 || num2 == num3 || num1 == num3 || num2 == num3)
					continue;
				else
				{
					putchar('0' + num1);
					putchar('0' + num2);
					putchar('0' + num3);
				}
				if (num1 == 7)
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
