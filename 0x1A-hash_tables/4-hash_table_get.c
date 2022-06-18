#include "hash_tables.h"

/**
 * hash_table_get - retrieve the value of a key
 * @ht: the hash table
 * @key: the key to the value
 * Return: NULL or value at key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	if (ht == NULL || key == NULL || key == "")
		return (NULL);

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
