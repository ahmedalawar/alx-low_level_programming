#include "main.h"
/**
*reverse_array - function that reverses the content of an array of integers
*@a: an array of integers
*@n: the number of elements to swap
*/

void reverse_array(int *a, int n)
{
	int i;
	char y;
	int z;

	z = n;
	if (n % 2 == 0)
	{
		for (i = 0; i < n / 2 ; i++)
		{
			y = a[i];
			a[i] = a[n];
			a[n] = y;
			n--;
		}
	else
	{
		for (i = 0; i < (n - 1) / 2 ; i++)
		{
			y = a[i];
			a[i] = a[n];
			a[n] = y;
			z--;
		}
	}
}
