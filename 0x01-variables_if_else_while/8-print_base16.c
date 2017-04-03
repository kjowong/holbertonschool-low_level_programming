#include <stdio.h>
/**
  * main - initial block
  * @void: no argument
  * Return: 0
  */
int main(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		putchar(i % 10 + '0');
		i++;
	}
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
