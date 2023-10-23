#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * *add_node -  function that adds a new node
 * @head: list_t
 * @str: string
 * Return: curr
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *curr;

	curr = (list_t *)malloc(sizeof(list_t));
	if (curr == NULL)
		return (NULL);
	curr->str = strdup(str);
	if (curr->str == NULL)
	{
		free(curr);
		return (NULL);
	}
	curr->len = strlen(str);
	curr->next = *head;
	*head = curr;
	return (curr);
}
