#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the head node's data,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int elem;

	if (!head || !*head)
		return (0);

	elem = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (elem);

}
