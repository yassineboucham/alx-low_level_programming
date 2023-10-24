#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: lintsint
 * @index: int
 * Return: tmp
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *tmp = head;

	while (i++ < index)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
