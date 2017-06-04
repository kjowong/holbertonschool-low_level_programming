#include "hash_tables.h"
/**
  * hash_table_set - function that adds an element to the hash table
  * @ht: hash table
  * @key: key for the hash table
  * @value: value of the key
  * Return: 1 on success, 0 on fail
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *ptr;
	int index;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	/* duplicate the key, value for the new_node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	/* set ptr to array */
	ptr = ht->array[index];
	/* check index for collisions */
	if (ptr == NULL)
		ptr = new_node;
	else
	{
		while (ptr != NULL)
		{
		/* check if the key matches*/
			if (strcmp(ptr->key, key) == 0)
			{
				free(new_node->key);
				free(ptr->value);
				ptr->value = strdup(value);
				free(new_node);
			}
			else
			{
				new_node->next = ptr;
				new_node->key = strdup(key);
				new_node->value = strdup(value);
				ptr = new_node;
			}
		ptr = ptr->next;
		}
	}
	return (1);
}
