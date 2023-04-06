#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer to take factorial of
 *
 * Return: factorial of n, or -1 if n < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	else if (y == 0)

		return (1);

	return (x * _pow_recursion(x, y - 1));
}

