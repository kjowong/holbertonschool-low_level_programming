#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * main - entry point
  * @argc: takes in string
  * @argv: takes in array
  * Return: 0
  */
int main(int argc, char *argv[] __attribute__((__unused__)))
{

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
