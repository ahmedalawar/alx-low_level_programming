#include "main.h"

/**
*sqrt_helper - help to build sqrt.
*@root: root of n number.
*_sqrt_recursion - Write a function that returns
*	the natural square root of a number.
*@n: number
*Return: square root
*/

int sqrt_helper(int n, int root)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	if (root * root < n)
	{
		return (sqrt_helper(n, root + 1));
	}
}

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 0));
}
