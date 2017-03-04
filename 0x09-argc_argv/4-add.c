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
	int i, result;

	result = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
		{
			result += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
