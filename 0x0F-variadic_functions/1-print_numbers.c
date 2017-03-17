#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_numbers - prints numbers followed by newline
  * @separator: string between numbers
  * @n: takes in an int
  *
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}
	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d%s", va_arg(valist, int), separator);
		}
	}
	va_end(valist);
	printf("%d\n", va_arg(valist, int));
}
