#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node
 * @head: dlistint_t
 * @index: unsigned int
 * Return: head
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
