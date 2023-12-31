#include "lists.h"

/**
 * list_len - length of the linked list
 * @h: first node pointer
 * Return: list size
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
