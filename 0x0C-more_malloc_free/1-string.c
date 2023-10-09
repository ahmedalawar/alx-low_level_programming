#include "main.h"
/**
*string_nconcat - function that concatenates two strings.
*@s1: string1
*@s2 string2
*@n: first n bytes of string2
*Return: pointer of concatnated string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, z, y;
	char *c;

	i = j = y = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	while (s1[j] != '\0')
	{
		j++;
	}
	if (n < i)
	{
		c = malloc(sizeof(*s1) + sizeof(char) * n);
		if (c == NULL)
		{
			return (NULL);
		}
		for (k = 0; k < j; k++)
		{
			c[k] = s1[k];
		}
		for (z = k; z < k + n; z++)
		{
			c[z] = s2[y++];
		}
		c[z] = '\0';
		return (c);
	}
	if ((i + 1) <= n)
	{
		c = malloc(sizeof(*s1) + sizeof(*s2));
		if (c == NULL)
		{
			return (NULL);
		}
		for (k = 0; k < j; k++)
		{
			c[k] = s1[k];
		}
		for (z = k; z < k + i; z++)
		{
			c[z] = s2[y++];
		}
		c[z] = '\0';
		return (c);
	}
	if (s2 == NULL)
	{
		c = malloc(sizeof(*s1) + 1);
		if (c == NULL)
		{
			return (NULL);
		}
		for (k = 0; k < j; k++)
		{
			c[k] = s1[k];
		}
		c[k] = '\0';
		return (c);
	}
	if (s1 == NULL)
	{
		c = malloc(sizeof(*s2) + 1);
		if (c == NULL)
		{
			return (NULL);
		}
		for (k = 0; k < j; k++)
		{
			c[k] = s2[k];
		}
		c[k] = '\0';
		return (c);
	}
	return (NULL);
}
