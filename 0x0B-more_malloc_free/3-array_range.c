#include "holberton.h"
#include <stdlib.h>
/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: creates an array of elements
  */
int *array_range(int min, int max)
{
	int *range;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	range = malloc(sizeof(int) * (max - min) + 1);
	if (range == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		range[i] = i;
	}
	return (range);
}
