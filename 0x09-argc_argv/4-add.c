#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
  * main - entry point
  * @argc: takes in arguments
  * @argv: takes in arguments array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i, j, result;

	result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				if (argv[i][0] != '-')
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
