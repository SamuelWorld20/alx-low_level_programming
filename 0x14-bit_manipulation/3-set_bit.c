#include "main.h"
#include <stdio.h>

/**
 * set_bit - it sets the value of a bit to 1 at a given index.
 * @n: it points to the number given
 * @index: the index, starting from 0 of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= bitmask;
	return (1);
}
