#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * main - entry point
  * @argc: takes in string
  * @argv: takes in array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{

			sum += (atoi(argv[i]) + 1);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
