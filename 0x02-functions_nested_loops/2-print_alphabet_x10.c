#include "holberton.h"
/**
  * print_alphabet_x10 - prints the alphabet in lowercase 10 times
  * @void - no argument
  *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c < 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}
}

