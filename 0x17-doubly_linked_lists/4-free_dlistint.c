#include "lists.h"
/**
 * free_dlistint -  a function that frees a dlistint_t list
 * @head: dlistint_t
*/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
