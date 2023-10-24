#include "lists.h"
/**
 * add_nodeint -adding node
 * @head: pointer to pointer listint_t
 * @n: const int
 * Return: tmp
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
