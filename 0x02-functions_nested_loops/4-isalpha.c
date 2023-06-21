#include "main.h"
#include <stdio.h>
/**
 * _isalpha - This function checks for alphabetic characters.
 * @c: Parameter argument
 *
 * Return: Alwaus 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
