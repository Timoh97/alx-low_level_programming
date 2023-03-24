#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints digit 0 through 9.
 *
 */



void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
