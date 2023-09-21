#include "main.h"
/**
**cap_string - function that capitalizes all words of a string.
*@a: pointer that indecates to the string
*Return: pointer.
*/

char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
	switch (a[i])
	{
	case ' ':
		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
		{
		a[i + 1] = toupper(a[i + 1]);
		}
	case '\t':
		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
			{
				a[i + 1] = toupper(a[i + 1]);
			}
	case '\n':
		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	case ',':
		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	case ';':
		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	case '.':
		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	case '!':
		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	case '?':
		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	case '"':
		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	case '(':
		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	case ')':
		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	case '{':
		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	case '}':
		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
		}
		i++;
		}
	return (a);
}
