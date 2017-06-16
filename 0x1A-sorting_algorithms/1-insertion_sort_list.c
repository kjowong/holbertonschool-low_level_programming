#include "sort.h"

/**
 * insertion_sort_list - sorts list with insertion sort
 * @list: input list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *pn, *nn;

	if (len_linkedList(*list) < 2)
		return;
	if (list && *list)
	{
		temp = (*list)->next;
		pn = temp->prev;
		nn = temp->next;

		while (temp)
		{
			if (temp->n < pn->n)
			{
				swap_insert(pn, temp, nn, list);
			}
			temp = nn;
			if (temp)
			{
				nn = temp->next;
				pn = temp->prev;
			}
		}
	}
}
/**
  * len_linkedList - finds the length of the linked list
  * @head: the head of the linked list
  * Return: number of nodes in the list
  */
unsigned int len_linkedList(listint_t *head)
{
	listint_t *temp;
	unsigned int i;

	temp = head;
	i = 0;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
/**
 * swap_insert - swaps integers with insertion form
 * @pn: previous node of linked list
 * @tmp: node to be swapped
 * @nn: next node of list
 * @l: the head of the linked list
 */
void swap_insert(listint_t *pn, listint_t *tmp, listint_t *nn, listint_t **l)
{

	while (pn && tmp->n < pn->n)
	{
		/* handle next node */
		if (nn)
			nn->prev = pn;

		/* handle temp node */
		tmp->next = pn;
		tmp->prev = pn->prev;

		/* handle prev node */
		if (pn->prev)
			(pn->prev)->next = tmp;
		pn->prev = tmp;
		pn->next = nn;

		/* reset comparison values */
		nn = pn;
		pn = tmp->prev;
		if ((*l)->prev)
			*l = (*l)->prev;
		print_list(*l);
	}
}
