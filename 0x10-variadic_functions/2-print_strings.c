#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - it prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list par;
	char *str;
	unsigned int s;

	va_start(par, n);
	for (s = 0; s < n; s++)
	{
		str = va_arg(par, char*);
		printf("%s%s", str == NULL ? "(nil)" : str,
				(s < n - 1 && separator != NULL) ? separator : "");
	}
	va_end(par);
	printf("\n");
}
