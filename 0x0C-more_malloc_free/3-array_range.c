#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if min > max, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *w;
	int i;

	if (min > max)
		return (NULL);
	w = malloc(sizeof(*w) * ((max - min) + 1));
	if (w == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		w[i] = min++;
	return (w);
}
