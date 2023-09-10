/*
*File: 102-print_comb5.c
*Auth: Ahmed Alawar
*/

#include <stdio.h>

/**
*main - program that prints all possible combinations of two two-digit numbers.
*	The numbers should range from 0 to 99
*	The two numbers should be separated by a space
*	All numbers should be printed with two digits. 1 should be printed as 01
*	The combination of numbers must be separated by comma, followed by a space
*	The combinations of numbers should be printed in ascending order
*	00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
*
*Return: Always (0).
*/

int main(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			if (num2 == 9)
				break;

			for (num3 = 0; num3 < 10; num3++)
			{
				for (num4 = 0; num4 < 10; num4++)
				{
					if (num1 == num3 && num2 == num4)
						continue;

					putchar('0' + num1);
					putchar('0' + num2);
					putchar(' ');
					putchar('0' + num3);
					putchar('0' + num4);
					
					if (num1 == 9 &&  num3 == 9 && num4 == 9 && num2 == 8)
						continue;

					putchar(',');
					putchar(' ');
					
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
