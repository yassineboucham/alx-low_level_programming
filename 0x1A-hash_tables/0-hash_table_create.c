#include "hash_tables.h"
/**
* hash_table_create -  function that creates a hash table.
* @size: unsigned long int
* Return: hash_t
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;

	hash_t = malloc(sizeof(hash_table_t));
	if (!hash_t)
		return (NULL);
	hash_t->size = size;
	hash_t->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (!hash_t->array)
	{
		free(hash_t);
		return (NULL);
	}
	return (hash_t);
}
