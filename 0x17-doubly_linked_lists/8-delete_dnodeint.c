#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 * @head: dlistint_t **
 * @index: unsigned int
 * Return: 1 or -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;

	dlistint_t *node = *head;

	if (!node)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		if (*head)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}
	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	if (!node)
		return (-1);
	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	free(node);
	return (1);
}
