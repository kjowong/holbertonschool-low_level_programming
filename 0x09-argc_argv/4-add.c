#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point
  * @argc: takes in arguments
  * @argv: takes in arguments array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i, result, counter;

	result = 0;

	/**if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	**/

	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i] == 0))
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

int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (0);
	}
	return (1);
}
