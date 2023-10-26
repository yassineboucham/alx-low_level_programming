#include "lists.h"
/**
* pop_listint - pop_listint
* @head: listint
* Return: tmp->n
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!head || !*head)
	return (0);
	i = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (i);
}
