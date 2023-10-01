#include "main.h"

/**
*is_prime_helper - function that returns 1
*@n: integar number
*@i: number less than 2 isn't prime.
*Return: return 1 if prime 0 otherwise.
*/
int is_prime_helper(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i > n / 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}

/**
*is_prime_number - check numbers is prime or not.
*@n: number
*Return: 1 if prime zero otherwise.
*/
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
