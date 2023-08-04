#include "main.h"
#include <stdlib.h>

/**
 * get_bit - it gives the value of bit in an index
 * @n: parameter that stores the given number
 * @index: the index, starting from 0 of the bit that will be gotten
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitmask = 1 << index;

	if (index >= n)
	{
		return (-1);
	}
	return ((n & bitmask) != 0);
}
