#include "main.h"
#include <stdio.h>
/**
 * _isdigit - This function checks if a character is a digit.
 * Description: If the character is a digit it returns 1, it returns 0
 * otherwise.
 * @c: This parameter collects a character.
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
