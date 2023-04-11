#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int en = 1;
	char *c = (char *) &en;

	return (*c);
}
