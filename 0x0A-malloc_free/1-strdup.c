#include "holberton.h"
#include <stdlib.h>
/**
  * _strlen - function to count string length
  * @s: takes in string
  * Return: returns string length
  */

int _strlen(char *s)
{
	int i = 0;

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
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	nstr = malloc((_strlen(str) + 1) * sizeof(char));

	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		*(nstr + i) = *(str + i);
	}
	nstr[i] = '\0';
	return (nstr);

}
