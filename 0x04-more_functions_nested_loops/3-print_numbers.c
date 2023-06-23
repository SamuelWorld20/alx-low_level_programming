#include "main.h"
#include <stdio.h>
/**
 * print_numbers - This prints numbers from 0 to 9.
 * Description: It prints with the _putchar() function.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
