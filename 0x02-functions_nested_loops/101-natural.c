#include "main.h"
#include <stdlib.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0;

	int num;

	for (num = 1; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
