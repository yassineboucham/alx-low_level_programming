#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: list_t
*/
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		head = ptr;
		ptr = ptr->next;
		free(head->str);
		free(head);
	}
}
