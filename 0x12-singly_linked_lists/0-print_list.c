#include "lists.h"
#include <stdio.h>
/**
 * print_list - Write a function that prints all the elements of a list_t list.
 * @h: list_t
 * Return: i
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *nex = h;

	while (nex != NULL)
	{
		if (nex->str != NULL)
		{
		printf("[%d] %s\n", nex->len, nex->str);
		}
		else
		printf("[0] (nil)\n");
		nex = nex->next;
		i++;
	}
	return (i);
}
