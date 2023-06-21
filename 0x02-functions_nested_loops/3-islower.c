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
		_putchar('1');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
