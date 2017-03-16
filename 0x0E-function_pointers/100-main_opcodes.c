#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry block
  * @argc: number of arguments
  * @argv: arguments array
  * Return: 0
  */
int main(int argc, char **argv)
{
	int i, arg;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	arg = atoi(argv[1]);

	if (arg < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < arg; i++)
	{
		printf("%02x ", ((unsigned char *)main)[i]);
	}
	printf("\n");
	return (0);
}

