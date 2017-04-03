#include "holberton.h"
/**
  * print_numbers - function that prints numbers 0-9
  * @void - no argument
  */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
