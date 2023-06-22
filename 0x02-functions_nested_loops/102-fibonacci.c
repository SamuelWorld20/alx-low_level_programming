#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int fib1 = 1;

	int fib2 = 2;

	int a;

	int nextFib;

	printf("%d, %d, ", fib1, fib2);
	for (a = 3; a <= 50; a++)
	{
		nextFib = fib1 + fib2;
		printf("%d", nextFib);
		if (a != 50)
		{
			printf(", ");
		}
		fib1 = fib2;
		fib2 = nextFib;
	}
	printf("\n");
	return (0);
}
