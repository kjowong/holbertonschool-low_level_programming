#include "holberton.h"
/**
  * print_last_digit - function that prints the last digit
  * @n: takes in an integer
  *
  */
int print_last_digit(int n)
{
	 int ln;

	 if (n >= 0)
	 {
		ln = n % 10;
		_putchar(ln + '0');
		return ln;
	 }
	 else
	 {
		ln = -1 *  n % 10;
		_putchar(ln + '0');
		return ln;
	 }
	 return (ln);
}
