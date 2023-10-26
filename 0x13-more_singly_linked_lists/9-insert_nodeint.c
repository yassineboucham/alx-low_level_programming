#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: listint
* @idx: int
* @n: int
* Return: new_node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int in = 0;

	listint_t *curr;
	listint_t *new_node;

	if (!head)
	return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		curr = *head;
		while (in < (idx - 1))
		{
			if (curr == NULL)
			{
				free(new_node);
				return (NULL);
			}
			curr = curr->next;
			in++;
		}
			new_node->next = curr->next;
			curr->next = new_node;
	}
	return (new_node);
}
