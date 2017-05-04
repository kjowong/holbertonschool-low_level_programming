#include "lists.h"
/**
  * sum_dlistint - sums up all the data of a linked list
  * @head: head of the linked list
  * Return: the sum
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	unsigned int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

