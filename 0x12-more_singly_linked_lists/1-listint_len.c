#include "lists.h"
/**
  * listint_len - returns the number of elements in linked listint_t list
  * @h: takes in a const struct type listint_t *h
  * Return: returns the counter
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *walker = h;

	if (walker == NULL)
		return (0);
	while (walker != NULL)
	{
		walker = walker->next;
		counter++;
	}
	return (counter);
}
