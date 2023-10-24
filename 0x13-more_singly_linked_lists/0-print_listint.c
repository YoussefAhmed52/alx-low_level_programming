#include "lists.h"
/**
 * print_listint - print the list
 * @h: pointer of the first node
 *
 * Return: list size
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
