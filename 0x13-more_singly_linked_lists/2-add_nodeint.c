#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
