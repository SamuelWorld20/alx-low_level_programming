#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *create_array - create array of characters, and initializes it with
 * a specific char
 * @size: the size of the memory
 * @c: the parameter that collects the characters
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);

	memset(array, c, size);

	return (array);
}
