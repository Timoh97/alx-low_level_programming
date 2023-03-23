#include "main.h"

/**
 * print_sign - check numers
 * @n : number to check
 * Return:0 or 1
 */

int print_sign(int n)
{
int score;

if (n > 0)
{
	score = 1;
	_putchar('+');
}
else if (n == 0)
{
	score = 0;
	_putchar('0');
}
else
{
	score = -1;
	_putchar('-');
}

return (score);
}
