#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This program will assign a number to var n and tell if the last digit
 * is either greater than 5, or is 0, or is less than 6 and not 0.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);
	if (n > 5)
	{
		printf("and is greater than 5\n");
	} else if (n == 0)
	{
		printf("and is 0\n");
	} else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
