#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *check1 = head;
	listint_t *check2 = head;

	if (!head)
		return (NULL);
	while (check1 && check2 && check1->check2)
	{
		check2 = check2->next->next;
		check1 = check1->next;

		if (check2 == check1)
		{
			check1 = head;
			while (check1 != fast)
			{
				check1 = check1->next;
				check2 = check2->next;
			}
			return (check2);
		}
	}
	return (NULL);
}



