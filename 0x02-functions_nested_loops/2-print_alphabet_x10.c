#include "main.h"

/**
 * print_alphabet_x10 -  prints alphabet 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	int lower;
	int i = 0;

	while (i < 10)
	{
		lower = 'a';
		while (lower <= 122)
		{
			_putchar(lower);
			lower++;
		}
		_putchar('\n');
		i++;

	}
}
