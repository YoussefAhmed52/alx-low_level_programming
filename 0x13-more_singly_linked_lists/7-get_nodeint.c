#include "lists.h"
/**
 * get_nodeint_at_index - index of a node returned
 * @head: pointer of the first node
 * @index: index of node
 * Return: node pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int k;

	for (node = head, k = 0; node && k < index; node = node->next, k++)
		;
	return (node);
}
