#include <stdio.h>
/**
 * main - This program prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	putchar('0');
	for (n = 1; n < 10; n++)
	{
		putchar(',');
		putchar(' ');
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
