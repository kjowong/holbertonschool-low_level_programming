#include "sort.h"

/**
 * insertion_sort_list - sorts list with insertion sort
 * @list: input list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *pn, *nn;

	if (list)
	{
		temp = (*list)->next;
		pn = temp->prev;
		nn = temp->next;

		while (temp)
		{
			if (temp->n < pn->n)
			{
				swap_insertion(pn, temp, nn);
				if ((*list)->prev)
					*list = (*list)->prev;
				print_list(*list);
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
 * swap_insertion - swaps integers with insertion form
 * @pn: previous node of linked list
 * @temp: node to be swapped
 * @nn: next node of list
 */
void swap_insertion(listint_t *pn, listint_t *temp, listint_t *nn)
{

	while (pn && temp->n < pn->n)
	{
		/* handle next node */
		if (nn)
			nn->prev = pn;

		/* handle temp node */
		temp->next = pn;
		temp->prev = pn->prev;

		/* handle prev node */
		if (pn->prev)
			(pn->prev)->next = temp;
		pn->prev = temp;
		pn->next = nn;

		/* reset comparison values */
		nn = pn;
		pn = temp->prev;
	}
}
