#include "main.h"

/**
 * print_triangle - draws a triangle in the terminal
 * @size: the size of the triangle.
 *
 *Return: Always (0) Success
 */

void print_triangle(int size)
{
	int row;
	int column;
	int k;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (column = size - row; column > 1; column--)
			{
				_putchar(32);
			}
			for (k = 0; k <= row; k++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
