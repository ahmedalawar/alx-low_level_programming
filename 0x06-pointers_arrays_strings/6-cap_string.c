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
		if (a[i] == (" " || "	" || "," || "\n" || ";" || "." || '"' || "(" || ")" || "{" || "}" || "?")
		{
			a[i + 1] = toupper(a[i + 1]);
		}
		i++;
	}
	return (a);
}
