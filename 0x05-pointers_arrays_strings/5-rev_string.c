#include "main.h"
/**
*rev_string - function that reverses a string.
*@s: pointer
*/

void rev_string(char *s)
{
	int i, j, f;
	char k;

	i = 0;
	f = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j > i / 2; j--)
	{
		k = s[f];
		s[f] = s[j];
		s[j] = k;
		f++;
	}
}
