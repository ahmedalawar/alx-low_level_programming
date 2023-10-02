#include "main.h"
/**
*is_palindrome - Write a function that returns 1 
*		if a string is a palindrome and 0 if not.
*@s: string
*Return: 1 if palindrome 0 if not
*/

int is_palindrome(char *s)
{
	int i =  0;

	while (s[i] != '\0')
	{
		i++;
	}
	if (i <= 1)
	{
		return (1);
	}
	else if (s[0] != s[i - 1])
	{
		return (0);
	}
	else
	{
		return (is_palindrome(s++));
	}
}
