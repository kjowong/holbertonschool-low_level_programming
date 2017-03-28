#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to a pointer
  * @idx: takes in the index
  * @n: takes in an integer
  * Return: NULL if function fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	if (newNode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (counter + 1 == idx)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		temp = temp->next;
		counter++;
	}
	free(newNode);
	return (NULL);
}
