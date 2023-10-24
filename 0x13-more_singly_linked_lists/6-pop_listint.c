#include "lists.h"
/**
 * pop_listint - pop_listint
 * @head: listint
 * Return: tmp->n
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	*head = tmp->next;
	return (tmp->n);
}
