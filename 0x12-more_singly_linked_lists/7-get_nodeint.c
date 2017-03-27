#include "lists.h"
/**
  * get_nodeint_at_index - return the nth node starting at 0
  * @head: takes in struct listint_t *head
  * @index: takes in an index
  * Return: the integer walker points to
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *walker;
	unsigned int counter = 0;

	walker = head;
	while (walker != NULL)
	{
		if (counter == index)
		{
			return (walker);
		}
		counter++;
		walker = walker->next;
	}
	return (walker);
}
