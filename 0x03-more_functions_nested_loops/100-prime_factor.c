#include <stdio.h>
/**
  * main - initial block
  * @void: no argument
  * Return: 0
  */
int main(void)
{
	unsigned long number = 612852475148;
	unsigned long i = 2;

	while (i < number)
	{
		if (number % i == 0)
		{
			number = number / i;
		}
		i++;
	}
	printf("%lu\n", i);
	return (0);
}
