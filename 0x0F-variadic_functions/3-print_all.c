#include "variadic_functions.h"
/**
  * print_char - print char
  * @valist: takes in a list
  */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
  * print_int - print int
  * @valist: takes in a list
  */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
/**
  * print_float - print float
  * @valist: takes in a list
  */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
  * print_string - print a string
  * @valist: takes in a list
  */
void print_string(va_list valist)
{
	char *temp;

	temp = va_arg(valist, char *);
	if (temp == NULL)
	{
		temp = "(nil)";
	}
	printf("%s", temp);
}
/**
  * print_all - prints everything
  * @format: takes in a format
  */
void print_all(const char * const format, ...)
{
	va_list valist;

	int i, j;

	char *str;

	p_t p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(valist, format);

	i = 0;
	str = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (p[j].c != NULL)
		{
			if (format[i] == p[j].c[0])
			{
				printf("%s", str);
				p[j].f(valist);
			}
			j++;
		}
		str = ", ";
		i++;
	}
	printf("\n");
	va_end(valist);
}
