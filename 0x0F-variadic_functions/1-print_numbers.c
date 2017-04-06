#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_numbers - prints numbers followed by newline
  * @separator: string between numbers
  * @n: takes in an int
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i != n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
