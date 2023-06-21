#include "main.h"
#include <stdio.h>
/**
 * print_times_table - This function prints the n times table.
 * @n: The parameter for which the times table is printed
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int a, b, result;

	if (n < 0 || n > 15)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			result = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 100)
					_putchar(' ');
				if (result < 10)
					_putchar(' ');
			}
			if (result >= 100)
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
			}
			else if (result >= 10)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
