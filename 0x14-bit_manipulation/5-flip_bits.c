#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, c = 0;
	unsigned long int present;
	unsigned long int k = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		present = k >> j;
			if (present & 1)
				c++;
	}
	return (c);
}

