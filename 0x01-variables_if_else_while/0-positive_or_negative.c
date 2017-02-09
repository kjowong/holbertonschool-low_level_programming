#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */
/**
 * main - main initial block
 * Function: prints statement based on if random number is greater, less then
 * or equal to zero
 * Return: Always 0 (Success)
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
