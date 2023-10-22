#include "lists.h"

size_t list_len(const list_t *h)
{
	const list_t *corent = h;
	size_t i = 0;
while (corent != NULL)
{
	corent = corent->next;
	i++;
}
return (i);
}
