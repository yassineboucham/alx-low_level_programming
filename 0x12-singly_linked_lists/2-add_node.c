#include "lists.h"
#include <stdlib.h>
#include <string.h>
list_t *add_node(list_t **head, const char *str)
{
	list_t curr;

	curr.str = strdup(str);
	curr.len = strlen(str);
	curr.next = **head;
	head = &curr;
	return (head);
}
