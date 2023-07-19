#include <stdio.h>
#include <stdlib.h>

/**
 * error - prints error message and exits
 *
 * @err: error code
 */
void error(int err)
{
	printf("Error\n");
	exit(err);
}

/**
 * main - prints the opcodes of its own main function.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
		error(1);

	n = atoi(argv[1]);
	if (n < 0)
		error(2);

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
