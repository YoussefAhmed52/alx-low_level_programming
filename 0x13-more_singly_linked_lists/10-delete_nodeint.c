#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index given
 * @index: index given
 * @head: address pointer to the first node
 * Return: 1 on success, -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *p_node;
	unsigned int j = 0;

	if (!*head || !head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (j == index)
		{
			p_node->next = node->next;
			free(node);
			return (1);
		}
		j++;
		p_node = node;
		node = node->next;
	}
	return (-1);
}
