#include "main.h"


/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int j = 0;
	unsigned int k = 0;

	if (!b)
		return (0);
	while (b[j])
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		k = 2 * k + (b[j] - '0');
		j++;
	}
	return (k);
}
