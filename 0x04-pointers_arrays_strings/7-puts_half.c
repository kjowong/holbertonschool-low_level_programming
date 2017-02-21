#include "holberton.h"
/**
  * puts_half - prints half of a string
  * @str: takes in a string
  *
  */
void puts_half(char *str)
{
	int i, length;

	length = string_length(str);

	for (i = ((length - 1) / 2) + 1; i <= length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
  * string_length - function to return string length
  * @s: takes in a string
  * Return: i - string length
  */

int string_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}


