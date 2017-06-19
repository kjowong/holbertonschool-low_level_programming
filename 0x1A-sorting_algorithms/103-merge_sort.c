#include "sort.h"
/**
  * merge_sort - sorts an array of integers ascending order with merge sort
  * @array: the array to be sorted
  * @size: size of the array
  */
void merge_sort(int *array, size_t size)
{
	int *copy;

	if (array && size > 1)
	{
		copy = malloc(sizeof(int *) * size);
		sort(0, size - 1, array, copy);
		free(copy);
	}
}
/**
  * sort - sorting the subarrays
  * @start: start of the subarray
  * @end: end of the subarray
  * @a: the original array
  * @copy: copy of the original array
  */
void sort(int start, int end, int *a, int *copy)
{
	int middle;

	if (start < end)
	{
		middle = (start + end) / 2;
		if ((start + end) % 2 == 0)
			middle--;
		sort(start, middle, a, copy);
		sort(middle + 1, end, a, copy);
		merge(start, end, a, copy);
	}
}
/**
  * merge - merging the same arrays
  * @start: start of the subarray
  * @end: end of the subarray
  * @a: the original array
  * @copy: copy of the original array
  */
void merge(int start, int end, int *a, int *copy)
{
	int left, right, middle, tempi, tempsize;

	tempsize = end - start + 1;
	middle = ((start + end) / 2);
	if ((start + end) % 2 == 1)
		middle++;
	printf("Merging...\n");
	left = start;
	printf("[left]: ");
	print_array(a + left, (size_t)(middle - left));
	right = middle;
	printf("[right]: ");
	print_array(a + right, (size_t)((end - middle) + 1));
	tempi = 0;
	while (left < middle || right <= end)
	{
		if (right > end)
		{
			while (left < middle)
				copy[tempi++] = a[left++];
			break;
		}
		if (left >= middle)
		{
			while (right <= end)
				copy[tempi++] = a[right++];
			break;
		}
		if (a[left] < a[right])
			copy[tempi++] = a[left++];
		else
			copy[tempi++] = a[right++];
	}
	left = start;
	tempi = 0;
	while (tempi < tempsize)
		a[left++] = copy[tempi++];
	printf("[Done]: ");
	print_array(a + start, tempsize);
}
