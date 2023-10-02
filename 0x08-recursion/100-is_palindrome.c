#include "main.h"
/**
*is_palindrome_helper - Write a function that returns 1
*		if a string is a palindrome and 0 if not.
*@s: string
*@start: start point.
*@end: end point of string.
*Return: 1 if palindrome 0 if not
*/

int is_palindrome_helper(char *s, int start, int end)
{
	if (start <= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
}

/**
*is_palindrome - write a function to check palindrome
*@s: string
*Return: 1 if palindrome 0 otherwise.
*/
int is_palindrome(char *s)
{
	int len =  0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (is_palindrome_helper(s, 0, len - 1));
}
