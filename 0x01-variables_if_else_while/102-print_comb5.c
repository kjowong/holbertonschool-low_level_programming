#include <stdio.h>
/**
  * main - initial block
  *
  * Return: 0
  **/
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
		if (j < i)
		{
		continue;
		}
			putchar(i / 10 + 48);
			putchar(i % 10 + 48);

			putchar(' ');

			putchar(j / 10 % 10 + 48);
			putchar(j % 10 + 48);
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
