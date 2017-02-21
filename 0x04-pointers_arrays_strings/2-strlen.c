#include "holberton.h"
/**
  * _strlen - returns the length of a string
  * @s: takes in a string
  *
  */
int _strlen(char *s)
{
	char *anchor = s;

	while (*s)
	{
		s++;
	}
	return (s - anchor);
}
