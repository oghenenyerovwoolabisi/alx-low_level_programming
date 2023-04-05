#include "lists.h"

/**
 * sum_listint - function that sum all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *inte = head;

	while (inte)
	{
		sum += inte->n;
		inte = inte->next;
	}
	return (sum);
}
