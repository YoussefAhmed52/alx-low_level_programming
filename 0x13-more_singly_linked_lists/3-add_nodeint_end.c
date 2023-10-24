#include "lists.h"
/**
 * add_nodeint_end - add a node at the end
 * @n: new node value
 * @head: pointer of the first node
 * Return: new node pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_end = malloc(sizeof(listint_t));
	listint_t *node;

	if (!new_node_end || !head)
		return (NULL);

	new_node_end->next = NULL;
	new_node_end->n = n;

	if (!*head)
		*head = new_node_end;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node_end;
	}
	return (new_node_end);
}
