#include "lists.h"
#include <stdio.h>
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
