#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in a linked list
 *@h:the pointer to structure
 * Return: length.
 */

size_t list_len(const list_t *h)
{
	unsigned int j;

	for (j = 0; h != NULL; j++)
	{
		h = h->next;
	}
	return (j);
}

