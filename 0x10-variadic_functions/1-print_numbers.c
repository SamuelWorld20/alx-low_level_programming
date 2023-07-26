#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - it prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int num;

	va_start(par, n);
	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(par, int));
		if (num < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(par);
	printf("\n");
}
