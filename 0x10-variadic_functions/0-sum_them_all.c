#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - it returns the sum of all its parameters.
 * @n: it holds the number of parameters.
 *
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int num;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(par, n);
	for (num = 0; num < n; num++)
		sum += va_arg(par, int);
	va_end(par);

	return (sum);
}
