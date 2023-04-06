#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string followed by new line
 * @s: string to be output
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
		return;
	}

}
