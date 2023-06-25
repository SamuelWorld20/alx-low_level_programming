#include <stdio.h>

/**
 * print_line - This function draws a straight line on the terminal.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
