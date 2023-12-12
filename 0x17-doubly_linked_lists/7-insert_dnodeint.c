#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;

	dlistint_t *crt = *h;
	dlistint_t *node;

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
