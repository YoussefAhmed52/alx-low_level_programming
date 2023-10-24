#include "lists.h"
/**
 * find_listint_loop_fl - find a loop in the linked list
 * @head: linkead list
 * Return: addrees of the node with the loop, NULL if no loop
 */

listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *p, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end->next)
	{
		if (end == end->next)
			return (end);
		for (p = head; p != end; p = p->next)
			if (p == end->next)
				return (end->next);
	}
	return (NULL);
}
/**
 * free_listint_safe - free a listint
 * @h: list head
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *l_node;
	size_t length;
	int loop = 1;

	if (*h == NULL || h == NULL)
		return (0);

	l_node = find_listint_loop_fl(*h);
	for (length = 0; (loop || *h != l_node) && *h != NULL; *h = next)
	{
		length++;
		next = (*h)->next;
		if (*h == l_node && loop)
		{
			if (l_node == l_node->next)
			{
				free(*h);
				break;
			}
			length++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (length);
}
