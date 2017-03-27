#include "lists.h"
/**
  * add_nodeint_end - add a new node at the end of listint_t list
  * @head: pointer to a pointer
  * @n: takes in an int
  * Return: pointer to the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *walker;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	walker = *head;
	while (walker->next != NULL)
	{
		walker = walker->next;
	}
	walker->next = newNode;
	return (newNode);
}
