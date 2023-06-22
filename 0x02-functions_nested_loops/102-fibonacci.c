#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	int fibNums[50];

	fibNums[0] = 1;

	fibNums[1] = 2;

	for (a = 2; a < 50; a++)
	{
		fibNums[a] = fibNums[a - 1] + fibNums[a - 2];
	}
	for (a = 0; a < 49; a++)
	{
		printf("%d, ", fibNums[a]);
	}
	printf("%d\n", fibNums[49]);
	return (0);
}
