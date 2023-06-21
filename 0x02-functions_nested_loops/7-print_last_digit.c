#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - This function prints the last digit of a number.
 * @num: Parameter argument.
 *
 * Return: Always 0.
 */
int print_last_digit(int num)
{
	int lastDigit = num % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
