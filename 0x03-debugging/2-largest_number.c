#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = c;

	if (a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = c;
	}

	return (largest);
}
