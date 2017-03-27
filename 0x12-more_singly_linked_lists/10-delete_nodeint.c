#include "lists.h"
/**
  * delete_nodeint_at_index - delete the node at index
  * @head: pointer to pointer
  * @index: index of node
  * Return: 1 if success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleteNode;
	listint_t *temp;

	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	while (temp != NULL)
	{
		if (index == counter + 1)
		{
			deleteNode = temp->next;
			temp->next = deleteNode->next;
			free(deleteNode);
		}
		if (index == 0)
		{
			*head = (*head)->next;
			free(temp);
			return (-1);
		}
		temp = temp->next;
		counter++;
	}
	if (counter <= index)
		return (-1);
	return (1);
}
