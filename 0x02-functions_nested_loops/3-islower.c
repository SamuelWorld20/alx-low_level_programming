#include "main.h"
#include <stdio.h>
/**
 * _islower - This functione checks for a lower case character.
 *@c: Parameter argument.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
