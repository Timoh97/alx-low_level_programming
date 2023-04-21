#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator to print between numbers
 * @n: number of numbers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	int num;
	va_list valist;

	va_start(valist, n);
	for (j = 0; j < n; j++)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (j < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
