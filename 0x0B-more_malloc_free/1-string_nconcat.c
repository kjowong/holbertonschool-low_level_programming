#include "holberton.h"
#include <stdlib.h>
/**
  * _strlen - find length of a string
  * @s: takes in a string
  * Return: string length in i
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
  * string_nconcat - function that concats two strings
  * @s1: takes in one string
  * @s2: takes in another string
  * @n: takes in an integer
  * Return: returns a new string up to the num passed for str2
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr, *empty = "";

	unsigned int i, j, str1 = 0, str2 = 0;

	if (s1 == NULL)
		s1 = empty;
	else
		str1 = _strlen(s1);
	if (s2 == NULL)
		s2 = empty;
	else
		str2 = _strlen(s2);
	if (n >= str2)
		n = str2;
	nstr = malloc((str1 * sizeof(char)) + n + 1);
	if (nstr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		nstr[i] = s1[i];
	if (str2 < n)
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			nstr[i] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++, i++)
		{
			nstr[i] = s2[j];
		}
	}
	nstr[i] = '\0';
	return (nstr);
}
