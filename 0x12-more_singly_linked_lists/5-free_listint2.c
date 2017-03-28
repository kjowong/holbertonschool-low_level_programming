#include "lists.h"
/**
  * free_listint2 - function that frees a listint_t list
  * @head: pointer to a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *walker;

	while (*head != NULL)
	{
		walker = *head;
		*head = walker->next;
		free(walker);
	}
	head = NULL;
}
