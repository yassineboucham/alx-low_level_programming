#include "lists.h"
/**
 * sum_listint -  function that returns the sum of all the data (n)
 * @head: listint
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		sum += tmp->n;
	}
	return (sum);
}
