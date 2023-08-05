#include "main.h"
#include <stdio.h>

/**
 * flip_bits - it give the number of bits that would be needed to
 * flip to get from one number to another.
 * @n: parameter that collects the numbers
 * @m: parameter that collecs he second number
 *
 * Return: the number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_diff = n ^ m;
	unsigned long int count = 0;

	while (bit_diff != 0)
	{
		if (bit_diff & 1)
		{
			count++;
		}
		bit_diff >>= 1;
	}
	return (count);
}
