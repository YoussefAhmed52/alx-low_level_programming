#include "lists.h"
/**
 * _r - reallocates memory for array of pointers to
 * nodes of linked list
 * @size: size of the new list(old list + 1)
 * @list: old list
 * @new: new node
 * Return: new list pointer
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **n_list;
	size_t j;

	n_list = malloc(size * sizeof(listint_t *));
	if (n_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (j = 0; j < size - 1; j++)
		n_list[j] = list[j];
	n_list[j] = new;
	free(list);
	return (n_list);
}

/**
 * print_listint_safe - print a listint_t linked list
 * @head: pointer to start
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t j, number = 0;
	const listint_t **l = NULL;

	while (head != NULL)
	{
		for (j = 0; j < number; j++)
		{
			if (head == l[j])
			{
				printf("-> [%p} %d\n", (void *)head, head->n);
				free(l);
				return (number);
			}
		}
		number++;
		l = _r(l, number, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(l);

	return (number);
}
