#include "main.h"
#include <stdio.h>
/**
 * print_sign - This function prints the sign of a number.
 * @n: Parameter argument that collects int variable.
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
	return (0);
}

