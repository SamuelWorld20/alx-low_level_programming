#include <stdio.h>
/**
 * main - This program prints all digit from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		printf("%d", digit);
	}
	printf("\n");
	return (0);
}
