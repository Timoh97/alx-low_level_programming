#include "main.h"

/**
 * sqrt_check - checks for the square root of c
 * @h:guess at sqrt
 * @c: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */
int sqrt_check(int h, int c)
{
	if (h * h == c)
		return (g);
	else
		return (-1);
	return (sqrt_check(h + 1, c));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n < 0)
		return (0);
	return (sqrt_check(1, n));
}
