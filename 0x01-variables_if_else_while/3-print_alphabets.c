#include <stdio.h>
/**
 * main - This program prints alphabets in lowercase and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	char uppercase = 'A';

	while (uppercase <= 'A')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
