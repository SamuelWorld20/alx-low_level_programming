#include "main.h"
#include <stdio.h>
/**
 * _abs - This function computes the absolute value of an integer.
 * @num: Parameter argument that collects numbers.
 *
 * Return: Always 0.
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
	return (0);
}
