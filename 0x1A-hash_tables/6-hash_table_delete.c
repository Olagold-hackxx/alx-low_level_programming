#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table to be deleted
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *next;
	unsigned long int index;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			next = temp;
			free(next->key);
			free(next->value);
			free(next);
			temp = temp->next;
		}
	}
	free(ht->array);
	free(ht);
}
