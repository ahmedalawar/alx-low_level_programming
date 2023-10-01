#include "main.h"

/**
*is_prime_number - function that returns 1 if the input integer is a prime number.
*@n: integar number
*@Return: retun 1 if prime 0 otherwise.
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
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
