#include <stdio.h>
#include <stdlib.h>

/**
 * main - it multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		return (printf("Error\n"), 1);
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
