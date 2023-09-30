#include "main.h"

/**
*_sqrt_recursion - Write a function that returns
*	the natural square root of a number.
*@n: number
*Return: square root
*/

int _sqrt_recursion(int n)
{
	int root;

	root = 0;
	if (n < 0)
	{
		return (-1);
	}
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root < n)
	{
		root++;
	}
	if (root * root == n)
	{
		return (root);
	}
}
