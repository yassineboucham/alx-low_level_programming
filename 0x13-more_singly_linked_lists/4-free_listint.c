#include "lists.h"
/**
* free_listint - free the list
* @head: listint_t
*/
void free_listint(listint_t *head)
{
	listint_t *curr = head;

	while (curr != NULL)
	{
		head = curr;
		curr = curr->next;
		free(head);
	}
}
