#include "main.h"
#include <stdio.h>

/**
 * more_numbers - This function prints numbers from 0 to 14.
 * Description: It prints the numbers 10 times.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int num, column;

	for (column = 0; column < 10; column++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar('1');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
