#include "holberton.h"
/**
  * _strlen - returns the length of a string
  * @s: takes in a string
  *
  */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
