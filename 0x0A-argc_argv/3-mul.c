#include "main.h"

/**
*main - program that multiplies two numbers.
*@argc: number of arguments
*@argv: array of string arguments
*Return: multiplication of two args
*/

int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n",mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
