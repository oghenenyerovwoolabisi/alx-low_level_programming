#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node to begining of list_t
 *@head: pointer to structure
 *@str: string
 * Return: the adrres of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nNode;
	unsigned int leng;

	nNode = malloc(sizeof(list_t));
	if (nNode == NULL)
	{
		free(nNode);
		return (NULL);
	}
	nNode->str = strdup(str);
	for (leng = 0; str[leng] != '\0'; leng++)

	nNode->len = leng;
	if (*head != NULL)
		nNode->next = *head;
	if (*head == NULL)
		nNode->next = NULL;
	*head = nNode;
	return (*head);
}
