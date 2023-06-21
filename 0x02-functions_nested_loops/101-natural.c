#include "main.h"
#include <stdlib.h>
/**
 * sumMultiples - This function prints the sum of all the multiples
 * of 3 or 5 below.
 * @n: Parameter argument that stores number.
 *
 * Return: Always 0.
 */
int sumMultiples(int n)
{
	int sum = 0;

	int num;

	for (num = 1; num < n; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	return (sum);
}
