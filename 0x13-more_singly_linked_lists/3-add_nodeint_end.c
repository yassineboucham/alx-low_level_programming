#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;
	return (newnode);
}
