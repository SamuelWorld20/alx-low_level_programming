#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - This program prints the alphabet 10 time.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int a, b;

	char letter = 'a';

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 26; b++)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
	}
}
