#include "holberton.h"
#include <stdlib.h>
/**
  * flip_bits - # of bits you would need to flip to get fr one # to another
  * @n: takes in an integer
  * @m: takes in the 2nd integer to compare
  * Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
	int index = (sizeof(unsigned long int) * 8) - 1;
	unsigned long int num = n ^ m;

	while (index >= 0)
	{
		if (((num >> index) & 1) == 1)
		{
			counter += 1;
		}
		index--;
	}
	return (counter);
}
