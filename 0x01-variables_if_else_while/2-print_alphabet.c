#include <stdio.h>
/**
 * main - This program prints the alphabets in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
