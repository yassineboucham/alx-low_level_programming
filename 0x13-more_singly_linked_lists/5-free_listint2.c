#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *curr = *head;

	while (curr != NULL)
	{
		*head = curr;
		curr = curr->next;
		free(*head);
	}
	*head = NULL;
}
