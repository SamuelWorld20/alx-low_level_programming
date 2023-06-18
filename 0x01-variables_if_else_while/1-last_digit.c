#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This program asign a number to var n and it will tell if the last
 * digit of the number is either greater then 5, or is 0, or if its less than 6
 * but not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit;

	last_digit = abs(n % 10);

	printf("Last digit of %d is ", n);

	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
