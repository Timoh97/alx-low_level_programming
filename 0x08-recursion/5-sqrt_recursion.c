#include "main.h"

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: number whose squareroot is being found.
 * Return: wrapper function.
 *
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	int sqrt_wrapper(int n, int i);
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_wrapper(n, i));
}
/**
 * sqrt_wrapper - compares a number with the square of another.
 * @n: number to be compared to.
 * @i: number to be squared.
 * Return: square root of first number.
 */
int sqrt_wrapper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		i += 1;
		return (sqrt_wrapper(n, i));
	}
}
