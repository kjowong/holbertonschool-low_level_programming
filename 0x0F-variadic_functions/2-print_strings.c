#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - function that prints a string
  * @separator: string between strings
  * @n: takes in an integer
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	char *temp;

	if (separator == NULL)
	{
		return;
	}
	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(valist, char *);
		if (temp == NULL)
		{
			printf("(nil)\n");
			return;
		}
		if (i < n - 1)
		{
			printf("%s%s", temp, separator);
		}
	}
	va_end(valist);
	printf("%s\n", temp);
}
