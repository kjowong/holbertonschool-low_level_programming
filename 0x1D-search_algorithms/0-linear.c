#include "search_algos.h"
/**
  * linear_search - func that searches for a value in an array of ints
  * @array: pointer to the first element of the array
  * @size: number of elements in array
  * @value: value returned
  * Return: index on success, -1 failed
  */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;
	int flag;

	flag = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			flag = 1;
			return (i);
		}
	}
	if (flag != 1)
		return (-1);
	return (i);
}
