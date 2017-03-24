#include "lists.h"
#include <string.h>
/**
 * free_list - free memory
 * @head: pointer to type list_t
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
