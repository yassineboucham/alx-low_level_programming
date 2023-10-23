#include "lists.h"

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
