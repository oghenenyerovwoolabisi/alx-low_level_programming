#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function that frees a list.
 *@head: a list that goes into the function.
 */
void free_list(list_t *head)
{
	list_t *inte;

	inte = head;
	while (inte != NULL)
	{
		free(inte->str);
		free(inte);
		inte = inte->next;
	}
}

