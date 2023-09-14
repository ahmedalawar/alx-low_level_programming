#include "main.h"

/**
*_isupper- function that checks for uppercase character.
*	_isupper checks which character is upper or lower.
*
*Return: Always (0).
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);

}
