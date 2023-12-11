#include "lists.h"
/**
* add_dnodeint_end - a function that adds a new node at the end
* @head: dlistint_t
* @n: const int
* Return: Node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node = malloc(sizeof(dlistint_t));
dlistint_t *temp;

	if (!node)
		return (NULL);
node->next = NULL;
node->n = n;
if (*head == NULL)
{
	node->prev = NULL;
	*head = node;
	return (node);
}
temp = *head;
while (temp->next != NULL)
	temp = temp->next;

temp->next = node;
node->prev = temp;
return (node);
}
