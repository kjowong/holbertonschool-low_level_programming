#include "holberton.h"
/**
  * main - initial block
  *
  * Return: 0
  **/
int main(void)
{
	char holberton[] = "Holberton";

	int c = 0;

	while (c < 9)
	{
		_putchar(holberton[c]);
		c++;
	}
	_putchar('\n');
	return (0);
}
