#include "lists.h"
/**
* sum_dlistint -  a function that returns the sum of all the data (n)
* @head: dlistint_t
* Return: res
*/
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
