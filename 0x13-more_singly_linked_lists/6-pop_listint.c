#include "lists.h"
/**
 * pop_listint - pops head of the list
 * @head: address of pointer
 *
 * Return: popped node value
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int k;

	if (!*head || !head)
		return (0);
	node = (*head)->next;
	k = (*head)->k;
	free(*head);
	*head = node;

	return (k);
}
