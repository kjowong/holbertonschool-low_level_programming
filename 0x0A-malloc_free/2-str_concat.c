#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _strlen - finds length of string
  * @s: takes in string
  * Return: string length in i
  *
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
  * str_concat - concats two strings
  * @s1: takes in string
  * @s2: takes in string
  * Return: returns a pointer to nstr, followed by null
  */
char *str_concat(char *s1, char *s2)
{
	char *nstr;

	int i, j, str1, str2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		str1 = _strlen(s1);
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		str2 = _strlen(s2);
	}

	nstr = malloc((str1 * sizeof(char)) + (str2 * sizeof(char)) + 1);
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		*(nstr + i) = *(s1 + i);
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		*(nstr + i) = *(s2 + j);
	}
	nstr[i] = '\0';
	return (nstr);
}
