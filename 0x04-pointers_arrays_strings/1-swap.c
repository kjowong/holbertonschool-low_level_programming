#include "holberton.h"
/**
  * swap_int - swaps the value of two integers
  * @a: takes in first integer
  * @b: takes in the second integer
  */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
