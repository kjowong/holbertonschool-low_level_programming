#include "hash_tables.h"
/**
  * hash_table_get - function that retrieves value associate with a key
  * @ht: the hash table you want to look into
  * @key: key you are looking for
  * Return: the value associated with the element, NULL if key not found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);
	/* assigned node to start somewhere */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
