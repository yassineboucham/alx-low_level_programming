#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int in = 0;
    listint_t *tmp = *head;
    listint_t *curr;
    curr = (listint_t *)malloc(sizeof(listint_t));
    while (in <= idx)
    {
        tmp->next = curr;
        tmp = tmp->next;
        curr->n = n;
        curr->next = tmp;
    }
}