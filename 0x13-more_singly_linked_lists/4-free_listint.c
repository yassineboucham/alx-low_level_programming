#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *curr = head;

	while (curr != NULL)
	{
		free(curr);
		curr = curr->next;
	}
}
