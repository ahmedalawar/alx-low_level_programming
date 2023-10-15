#include "variadic_functions.h"
/**
*print_numbers - function that prints numbers, followed by a new line.
*@separator: is the string to be printed between numbers
*@n: is the number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		if (separator != NULL)
		{
			printf("%d", x);
			if (i == (n - 1))
			{
			}
			else
			{
				printf("%s", separator);
			}
		}
		else
		{	
			printf("%d", x);
		}
	}
	printf("\n");
}
