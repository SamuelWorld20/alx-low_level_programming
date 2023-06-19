#include <stdio.h>
/**
 * main - This program prints alphabets in lowercase and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		putchar++;
	}
	while (uppercase <= 'A')
	{
		putchar(uppercase);
		putchar++;
	}
	putchar('\n');
	return (0);
}
