#include "lists.h"
/**
  * sum_listint - returns the sum of all the data of the linked list
  * @head: takes in a struct type pointer *head
  * Return: returns the sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}