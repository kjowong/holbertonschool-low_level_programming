#include <stdio.h>

/* This program prints characters from 0 to 9 with
    * the help of putchar function.
     */

/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
		int i;

		for (i = 0; i < 10; i++)
		{
			putchar(i % 10 + '0');
		}

		putchar('\n');
		return (0);
}
