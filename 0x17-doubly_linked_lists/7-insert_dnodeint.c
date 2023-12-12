#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: dlistint_t
 * @idx: unsigned int
 * @n: int
 * Return: node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;

	dlistint_t *crt = *h;
	dlistint_t *node;

	if (idx == 0)
	{
		node = malloc(sizeof(dlistint_t));
		if (!node)
			return (NULL);
		node->prev = NULL;
		node->next = crt;
		node->n = n;
		if (crt)
			crt->prev = node;
		*h = node;
		return (node);
	}
	while (crt)
	{
		if (i++ == idx)
		{
			node = malloc(sizeof(dlistint_t));
			if (!node)
				return (NULL);
			node->prev = crt->prev;
			node->n = n;
			node->next = crt;
			if (crt->prev)
				crt->prev->next = node;
			crt->prev = node;
			return (node);
		}
		crt = crt->next;
	}
	return (NULL);
}
