#include "main.h"
/**
*_strcmp - function that compares two strings.
*@s1: pointer that indicate the first comparator
*@s2: pointer that indicates the second comprator
*Return:(0) if two strings are identcal
*	(-) If the first character that doesn't match has a lower value in the
*		first string compared to the second
*	(+) the first non-matching character has a higher value in the first string
*/

int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j] != '\0' || s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
		j++;
	}
}
