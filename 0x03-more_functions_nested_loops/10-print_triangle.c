#include "holberton.h"
/**
  * print_triangle - prints a triangle
  * @size: takes in a integer for size of triangle
  *
  */
void print_triangle(int size)
{
	int column, row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (column = 0; column < size; column++)
	{
		for(row = 0; row <= column; row++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
