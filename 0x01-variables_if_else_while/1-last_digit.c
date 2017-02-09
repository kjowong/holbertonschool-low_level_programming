#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
  * main - main initial block
  * Function: Takes last number and compares values
  * Return: Always 0 (Success)
**/

int main(void)
{
	int n;
	int ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;

	if (ln > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ln);
	}
	else if (ln < 6 && ln != 0)
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, ln);
	}
	else
	{	printf("Last digit of %d is %d and is 0\n", n, ln);

	}
	return (0);
}
