#include "main.h"

/**
 * set_bit - sets a bit at the index to 1
 * @n: pointer to the number to change
 * @index: index starting from 0 of the bit you want to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1U << index) | *n);
	return (1);
}
