#include "variadic_functions.h"
/**
*print_strings - function that prints strings, followed by a new line.
*@separator: is the string to be printed between the strings
*@n:is the number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *p = va_arg(args, char *);

		if (separator != NULL)
		{
			if (p == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", p);
			}
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
			if (p == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", p);
			}
		}
	}
	printf("\n");
}
