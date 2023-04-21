#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator to print between the strings
 * @n: number of strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *str;
	va_list valist;

	va_start(valist, n);
	for (j = 0; j < n; j++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (j < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
