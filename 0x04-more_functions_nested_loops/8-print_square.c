#include "main.h"

/**
 * print_square - draws a square in the terminal
 * @size: the size of the square.
 *
 *Return: Always (0) Success
 */



void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
