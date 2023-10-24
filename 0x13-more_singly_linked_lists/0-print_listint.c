#include "lists.h"
/**
 * print_listint - printing linked lists
 * @h: const listint_t
 * Return: i
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *curr;
	size_t i = 0;

	if (!h)
	return (0);
	curr = h;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		i++;
	}
	return (i);
}
