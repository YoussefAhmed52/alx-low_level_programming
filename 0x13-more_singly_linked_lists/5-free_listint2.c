#include "lists.h"
/**
 * free_listint2 - free list
 * @head: address of the pointer of the first node
 * Retrun: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *tmp;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	*head = NULL;
}
