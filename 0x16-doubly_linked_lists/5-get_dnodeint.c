#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head of the linked list
 * @index: index of the linked list
 * Return: the nth node of the linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 0;

	temp = head;
	while (walker != NULL)
	{
		if (counter == index)
			return (temp);
	counter++;
	temp = temp->next;
	}
	return (temp);
}

