#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int ith;
	int jth;

	for (ith = 0; ith < 8; ith++)
	{
		for (jth = 0; jth < 8; jth++)
			_putchar(a[ith][jth]);
		_putchar('\n');
	}
}
