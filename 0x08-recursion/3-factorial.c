#include "main.h"

/**
*factorial - Write a function that returns the factorial of a given number.
*@n: number
*
*Return: fatorial
*/

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
