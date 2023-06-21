#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - This program prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
