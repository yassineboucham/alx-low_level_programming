#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr;
	list_t *tmp = *head;

	curr = (list_t *)malloc(sizeof(list_t));
	if (curr == NULL)
		return (NULL);
	curr->str = strdup(str);
	curr->len = strlen(str);
	curr->next = NULL;
	if (*head == NULL)
	{
		*head = curr;
		return (curr);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = curr;
	return (curr);
}