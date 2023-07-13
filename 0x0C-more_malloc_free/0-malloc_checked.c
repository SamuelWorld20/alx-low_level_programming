#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - it allocates memory using malloc
 * @b: the parameter that holds size of memory to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
