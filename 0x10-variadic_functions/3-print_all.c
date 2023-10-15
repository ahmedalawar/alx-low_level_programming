#include "variadic_functions.h"
/**
*print_all -  function that prints anything.
*@format: s a list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	int j = 0;
	char c;
	int y;
	float f;
	char *s;
	va_list args;

	va_start(args, format);
	while (format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				y = va_arg(args, int);
				printf("%d", y);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s != NULL)
				{
					printf("%s", s);
				}
				else
				{
					printf("(nil)");
				}
				break;
		}
		j++;
		printf(", ");
	}
	va_end(args);
	printf("\n");
}
