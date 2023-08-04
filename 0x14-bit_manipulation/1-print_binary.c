#include "main.h"
#include <stdio.h>

/**
 * print_binary - it prints the binary representation of a number
 * @n: it collects the number
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 1UL << (sizeof(num) * 8 - 1);
	int i = 0;

	while (num)
	{
		if (n & num)
		{
			_putchar('1');
			i = 1;
		}
		else
		{
			if (i)
				_putchar('0');
		}
		num >>= 1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
