#include "hash_tables.h"

/**
 * hash_table_set - set hash values at index
 * @ht: the hash table
 * @key: key to store value
 * @value: value to be stored in hash table
 * Return: 1 on success 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *new_node;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	if (!ht || !key || *(key) == '\0')
		return (0);

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
		return (0);
	new_node->value = strdup(value);
	if (new_node->value == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
