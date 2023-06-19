#include <stdio.h>
/**
 * main - This progarm prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
	}
	for (number = 0; number < 6; number++)
	{
		putchar('a' + number);
	}
	putchar('\n');
	return (0);
}
