#include "hash_tables.h"

/**
 * hash_table_print - print values and keys in a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int index, i = 0;

	if (!ht)
		return;

	putchar('{');
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		if (temp)
		{
			while (temp)
			{
				if (i > 0)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				i++;
			}
		}
	}
	putchar ('}');
	putchar ('\n');
}
