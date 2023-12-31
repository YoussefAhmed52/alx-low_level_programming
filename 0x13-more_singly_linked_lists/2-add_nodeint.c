#include "lists.h"
/**
 * add_nodeint - adds a node on the top
 * @head: first node pointer
 * @n: new node value
 * Return: new node pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
