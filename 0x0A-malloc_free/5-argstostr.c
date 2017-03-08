#include "holberton.h"
#include <stdlib.h>
/**
  * argstostr - concats all arguments of program
  * @ac: takes in arguments
  * @av: array of arguments
  * Return: pointer to new string
  */
char *argstostr(int ac, char **av)
{
	char *nstr;

	int i, j, length, all_args;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0, length = 0; av[i][j] != '\0'; j++, length++)
		{
			;
		}
		length++;
	}
	length++;

	nstr = malloc(sizeof(char) * length + 1);

	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; av[i] != '\0'; i++)
	{

		for (j = 0, all_args = 0; av[i][j] != '\0'; j++, all_args++)
		{
			nstr[all_args] = av[i][j];
		}
		nstr[all_args] = '\n';
		all_args++;
	}
	nstr[all_args] = '\0';
	return (nstr);
}
