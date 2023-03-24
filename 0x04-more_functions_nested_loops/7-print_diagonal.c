#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character '\' should be printed.
 *
 *Return: Always (0) Success
 */



void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar(92);
					_putchar(10);
				}
				else
				{
					_putchar(32);
				}
			}
		}
	}
	else
	{
		_putchar(10);
	}
}
