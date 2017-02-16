#include <stdio.h>
/**
  * main - initial block
  * @void: no argument
  * Return: 0
  */
int main(void)
{
	unsigned long int curr, prev, sum, counter;

	prev = 1;
	curr = 2;
	sum = 0;

	printf("%lu, ", prev);
	printf("%lu, ", curr);

	for (counter = 2; counter < 50; counter++)
	{
		sum = prev + curr;
		prev = curr;
		curr = sum;
		if (counter != 49)
		{
			printf("%lu, ", sum);
		}
		else
		{
			 printf("%lu\n", sum);
		}
	}
	return (0);

}
