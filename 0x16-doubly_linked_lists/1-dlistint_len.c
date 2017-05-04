#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: takes in a const dlistint head
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *temp = h;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}

