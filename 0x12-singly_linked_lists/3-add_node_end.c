#include "lists.h"
/**
* *add_node_end - function that adds a new node at the end of a list_t list
* @head: list_t
* @str: char
* Return: curr
*/
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
