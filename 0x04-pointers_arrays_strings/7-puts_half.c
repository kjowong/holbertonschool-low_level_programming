#include "holberton.h"
/**
  * puts_half - prints half of a string
  * @str: takes in a string
  *
  */
void puts_half(char *str)
{
	int i, half;
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}


	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[c] % 2 == 1)
		{
			_putchar(str[i] - 1);
		}
		else
		{
			half = str[c] / 2;
			for (j = 0; j < half; j++)
			{
				temp = str[c];
				str[i] = temp;
			}
			temp[i] = '\0';
			_putchar(half);
		}
	}
	_putchar('\n');
}
