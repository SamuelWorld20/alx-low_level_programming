#include <stdio.h>
/**
 * main - This program prints all digits from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar('0' + digit);
		digit++;
	}
	putchar("\n");
	return (0);
}
