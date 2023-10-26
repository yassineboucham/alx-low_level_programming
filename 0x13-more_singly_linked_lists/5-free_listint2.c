#include "lists.h"
/**
 *  free_listint2 - deletes the head node of a listint_t linked list
 * @head: listint_t
*/
void free_listint2(listint_t **head)
{
	listint_t *curr;

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}
}
