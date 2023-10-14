#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - function that returns the sum of all its parameters.
*@n:number of arguments
*Return:sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int  i;
	unsigned int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	int x = va_arg(args, int);
		sum += x;
	}
	return (sum);
}
