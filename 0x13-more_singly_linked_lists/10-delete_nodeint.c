#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *inte = *head;
	listint_t *present = NULL;
	unsigned int j;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(inte);
		return (1);
	}
	for (j = 0; j < index - 1; j++)
	{
		if (!inte || !(inte->next))
			return (-1);
		inte = inte->next;
	}
	present = inte->next;
	inte->next = present->next;
	free(present);
	return (1);
}
