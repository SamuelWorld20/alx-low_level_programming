#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - it executes a function given as a parameter on each
 * element of an array.
 * @array: parameter that holds array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;
	while (size--)
		action(*array++);
}
