#include "lists.h"
/**
  * free_listint - free the listint_t list
  * @head: takes in a struct type listint_t *head
 */
void free_listint(listint_t *head)
{
	listint_t *walker;

	while (head != NULL)
	{
		walker = head;
		head = walker->next;
		free(walker);
	}
}
