#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	unsigned int fib1 = 1;

	unsigned int fib2 = 2;

	unsigned int fibNext;

	printf("%u, %u, ", fib1, fib2);
	for (a = 3; a <= 98; a++)
	{
		fibNext = fib1 + fib2;
		printf("%u", fibNext);
		if (a != 98)
		{
			printf(", ");
		}
		fib1 = fib2;
		fib2 = fibNext;
	}
	printf("\n");
	return (0);
}
