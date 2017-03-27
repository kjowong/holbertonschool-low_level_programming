#include "lists.h"
/**
  * print_listint - prints all the elements of listint_t
  * @h: takes in a const struct type *h
  * Return: returns the counter
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *walker = h;

	if (walker == NULL)
		return (0);
	while (walker != NULL)
	{
		printf("%d\n", walker->n);
		walker = walker->next;
		counter++;
	}
	return (counter);
}
