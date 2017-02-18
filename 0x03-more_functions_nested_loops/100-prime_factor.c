#include <stdio.h>
/**
  * main - initial block
  * @void: no argument
  * Return: 0
  */
int main(void)
{
	long number = 612852475143;
	long i;

	for (i  = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}

	}
	printf("%lu\n", i);
	return (0);
}
