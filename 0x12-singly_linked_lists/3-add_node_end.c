#include "lists.h"

/**
 * add_node_end - add node to the end
 * @str: str node
 * @head: pointer address for head node
 * Return: list size
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!new_head || !head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_node->len = _strlen(new_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
