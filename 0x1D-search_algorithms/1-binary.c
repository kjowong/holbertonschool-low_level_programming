#include "search_algos.h"
/**
  * binary_search - func that searches for a value in a sorted array of ints
  * @array: pointer to the first element of the array
  * @size: number of elements in array
  * @value: value of the array index
  * Return: -1 on fail and index on success
  */
int binary_search(int *array, size_t size, int value)
{
	unsigned int left, right;
	int middle;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);
	if (size == 1)
	{
		return (array[left]);
	}
	while (right >= left)
	{
		print_array(array, left, right);
		middle = (right + left) / 2;
		if (array[middle] == value)
			return (array[middle]);
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle;
		}
	}
	return (-1);
}
/**
  * print_array - prints the array
  * @array: the array
  * @start: starting point of the array
  * @end: ending point of the array
  */
void print_array(int *array, size_t start, size_t end)
{

	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", i);
}
