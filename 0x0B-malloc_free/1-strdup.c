#include "main.h"

/**
*_strdup - function that returns a pointer to a newly allocated space in memory
*		which contains a copy of the string given as a parameter.
*@str: string to copy
*Return: copy of string
*/
char *_strdup(char *str)
{
	char *ar;
	int i, j, len;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i + 1;
	ar = malloc(len * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
	ar[j] = str[j];
	}
	ar[j] = '\0';
	return (ar);
}
