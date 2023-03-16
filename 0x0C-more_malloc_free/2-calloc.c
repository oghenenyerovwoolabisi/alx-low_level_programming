#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *w;
	unsigned int i;

	if (nmemb = 0 || size = 0)
		return (NULL);
	
	w = malloc(nmemb * size);
	if (w == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
		w[i] = 0;
	i++;
	return (w);
}
