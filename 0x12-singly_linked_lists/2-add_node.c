#include "lists.h"
/**
 * add_node - add node to the start of list
 * @str: str node
 * @head: pointer address of node head
 * Return: list size
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

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
		new_head->len = _strlen(new_head);
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
