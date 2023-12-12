#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i = 0;

    dlistint_t *crt = *h;
    dlistint_t *node;

    if (idx == 0)
    {
        node = malloc(sizeof(dlistint_t));
        if (!node)
            return (NULL);

        node->n = n;
        node->prev = NULL;
        node->next = crt;

        if (crt)
            crt->prev = node;

        *h = node;
        return (node);
    }

    while (crt)
    {
        if (i++ == idx)
        {
            node = malloc(sizeof(dlistint_t));
            if (!node)
                return (NULL);

            node->n = n;
            node->prev = crt->prev;
            node->next = crt;

            if (crt->prev)
                crt->prev->next = node;

            crt->prev = node;
            return (node);
        }
        crt = crt->next;
    }

    if (i == idx)
    {
        node = malloc(sizeof(dlistint_t));
        if (!node)
            return (NULL);

        node->n = n;
        node->prev = crt;
        node->next = NULL;

        if (crt)
            crt->next = node;

        return (node);
    }

    return (NULL);
}
