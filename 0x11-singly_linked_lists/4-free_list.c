#include "lists.h"
#include <string.h>
/**
 * add_node_end - add node to the end
 * @head: pointer to a pointer
 * @str: takes in a string
 * Return: pointer to the end
 */
void free_list(list_t *head)
{
	int i = 0;

	list_t *walker;

	while (i != 0)
	{
		if (head != NULL)
		{
			walker = head;
			head = walker->next;
			free(walker->str);
			free(walker);
		}
	i++;
	}
}
