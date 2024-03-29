#include "main.h"
/**
*str_concat - function that concatenates two strings.
*@s1: pointer to string1
*@s2: pointer to string2
*Return: string concatinated
*/

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i, j, len, k, x;

	i = j = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[i] != '\0')
	{
		i++;
	}
	while (s1[j] != '\0')
	{
		j++;
	}
	len = j + i + 1;
	ar = malloc(len * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < j; k++)
	{
		ar[k] = s1[k];
	}
	for (x = 0; x < i; x++)
	{
		ar[k++] = s2[x];
	}
	ar[i + j] = '\0';
	return (ar);
}
