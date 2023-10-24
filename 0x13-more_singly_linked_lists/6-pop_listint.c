#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	*head = tmp->next;
	return (tmp->n);
}
