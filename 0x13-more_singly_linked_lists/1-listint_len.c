#include "lists.h"
/**
 * listint_len - prints the list
 * @h: pointer of the first node
 * Return: list size
 */
size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
