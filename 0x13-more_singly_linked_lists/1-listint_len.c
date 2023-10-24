#include "lists.h"
/**
 * listint_len - len of linked list
 * @h: const listint_t
 * Return: i
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
