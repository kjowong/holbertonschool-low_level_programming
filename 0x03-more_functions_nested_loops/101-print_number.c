#include "holberton.h"
/**
  * print_number - print numbers out
  * @n: takes in an integer
  *
  */
void print_number(int n)
{
	int x = n;
	int i, j, div;

	div = 1;

	if (n < 0)
	{
		x = x * -1;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
	}

	for (i = 1; x > 0; i++)
	{
		x /= 10;
	}
		for (j = 0; j < i - 1; j++)
		{	div *= 10;


			while (div >= i)
			{
				_putchar(x / div + '0');
				n = n % div;
				div = div / 10;

			}
		}

}
