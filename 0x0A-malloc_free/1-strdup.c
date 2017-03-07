#include "holberton.h"
#include <stdlib.h>
/**
  * _strlen - function to count string length
  * @s: takes in string
  * Return: returns string length
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
/**
  * _strdup - returns pointer to a new string, dup of str
  * @str: takes in string
  * Return: returns pointer to new string
  *
  */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int i, length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = _strlen(str);

	nstr = malloc(length * sizeof(char));

	for (i = 0; i < length; i++)
	{
		*(nstr + i) = *(str + i);
	}
	return (nstr);

}
