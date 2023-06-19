#include <stdio.h>
/**
 * main - This progarm prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '15'; digit++)
	{
		putchar(digit);
	}
	for (digit = 'a'; digit <= 'p'; digit)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
