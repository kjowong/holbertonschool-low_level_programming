#include "sort.h"

/**
 * shell_sort - sorts list with shell sort method
 * @array: input list to sort
 * @size: lenth/ size of input array
 */
void shell_sort(int *array, size_t size)
{
	int gap, g;
	size_t check, prev;
	int gaparr[4] = {
		40, 13, 4, 1
	};

	if (array && size > 1)
	{
		for (g = 0; gaparr[g] >= (int)size; g++)
			;
		prev = 0;
		gap = gaparr[g];
		check = prev + gap;
		while (check < size)
		{
			if (array[check] < array[prev])
				swap_shell(check, prev, gap, array);
			prev++;
			check++;
			if (check >= size)
			{
				print_array(array, size);
				if (g < 4)
				{
					gap = gaparr[++g];
					prev = 0;
					check = prev + gap;
				}
			}
		}
	}
}
/**
 * swap_shell - swaps integers with insertion form based on gap
 * @check: the index of integer to check
 * @prev: index of previous integer in array that is larger than the check
 * @gap: gap to rotate check and prev
 * @a: the array for referencing indexes
 */
void swap_shell(int check, int prev, int gap, int *a)
{
	int temp;

	while (prev >= 0 && a[check] < a[prev])
	{
		temp = a[prev];

		a[prev] = a[check];

		a[check] = temp;

		check -= gap;
		prev -= gap;
	}
}
