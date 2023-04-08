#include "main.h"

/**
 * _puts - string followed by new line
 *
 * @str: string to be printed
 * Return: str followed by new line
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
