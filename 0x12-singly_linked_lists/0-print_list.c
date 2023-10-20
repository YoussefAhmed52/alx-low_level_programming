#include "lists.h"


/**
 * _strlen - length of the string
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);
	while (*s++)
		j++;
	return (j);
}
/**
 * print_list - print a linked list
 * @h: pointer to the first node
 * Return: list size
 */

size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("[%d] %s\n", strlen(h->str) ? h->str : "(nil)");
		h = h->next;
		j++;
	}
	return (j);
}
