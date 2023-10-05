#include "main.h"
/**
*argstostr - function that concatenates all the arguments of your program.
*@ac: arguments
*@av: 2darray
*Return: pointer of characters.
*/

char *argstostr(int ac, char **av)
{
	char *ar;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	ar = malloc(ac * sizeof(char *));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		ar[i] = av[i];
		ar[i++] = '\n';
	}
	return (ar);
}
