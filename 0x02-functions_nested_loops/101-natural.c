#include <stdio.h>
/**
  * main - initial block
  * @void: no argument
  * Return: 0 Success
  */
int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	print("%d\n", sum);
	return (0);
}

