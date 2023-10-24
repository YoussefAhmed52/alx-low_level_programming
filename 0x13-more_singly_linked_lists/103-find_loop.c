#include "lists.h"
/**
 * find_listint_loop - finds a loop
 * @head: linked list
 * Return: address of node with the loop, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
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
