#include "holberton.h"
/**
  *
  *
  *
  */
void print_number(int n)
{

	if (n < 0)
	{
		n = n * -1;
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 9)
	{
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 99 && n <= 999)
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 999 && n <= 1024)
	{
		_putchar(n / 1000 + '0');
		_putchar(n / 100 + '0');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}

}
