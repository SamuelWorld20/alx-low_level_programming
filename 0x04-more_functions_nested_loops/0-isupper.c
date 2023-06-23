#include "main.h"
#include <stdio.h>
/**
 * _isupper - This function checks if a character is uppercase.
 * Description: If the character is uppercase it returns 1 it returns 0
 * otherwise.
 * @c: This parameter collects a character.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
