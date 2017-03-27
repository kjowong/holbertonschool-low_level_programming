#include "lists.h"
/**
  * add_nodeint - adds new node at the beginning of a listint_t list
  * @head: pointer to a pointer
  * @n: takes in an integer
  * Return: pointer to the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
