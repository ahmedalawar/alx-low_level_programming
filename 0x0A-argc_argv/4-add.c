#include "main.h"

/**
*main - program that adds positive numbers.
*@argc: numbers of arguments
*@argv: array of string arguments
*Return: sum
*/

int main(int argc, char *argv[])
{
	int sum,i;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i] >= '0' && argv[i] <= '9')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);

}
