#include "lists.h"

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
