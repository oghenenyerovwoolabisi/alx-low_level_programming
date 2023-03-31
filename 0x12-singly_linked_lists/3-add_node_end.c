#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 *@head: head of the linked list.
 *@str: string that stores in the list.
 *Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nu, *temp;
	size_t nchar = 0;

	nu = malloc(sizeof(list_t));
	if (nu == NULL)
		return (NULL);

	nu->str = strdup(str);

	while (str[nchar])
	{
		nchar++;
	}

	nu->len = nchar;
	nu->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = nu;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nu;
	}

	return (*head);
}
