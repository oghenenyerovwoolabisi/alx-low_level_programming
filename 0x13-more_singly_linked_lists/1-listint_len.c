#include "lists.h"


/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t elem;

	for (elem = 0; h != NULL; elem++)
	{
		h = h->next;
	}
	return (elem);
}


