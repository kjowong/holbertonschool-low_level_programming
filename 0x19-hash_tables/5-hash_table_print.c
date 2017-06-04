#include "hash_tables.h"
/**
  * hash_table_print - function that prints a hash table
  * @ht: the hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index;

	index = 0;
	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			index++;
		}
	index++;
	}
	printf("}\n");
}
