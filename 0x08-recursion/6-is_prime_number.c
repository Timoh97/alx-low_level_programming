#include "main.h"

/**
 * is_prime_number - checks if a number is prime.
 * @n: number to be checked.
 * Return: prime_wrapper function.
 *
 */

int is_prime_number(int n)
{
	int i = 1;

	int prime_checker(int n, int i);
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (prime_checker(n, i + 1));
}
/**
 * prime_checker - divides a number by the second, checks remainder.
 * @n: number to be divided.
 * @i: number to divide.
 * Return: 1 if prime and 0 otherwise.
 */
int prime_checker(int n, int i)
{
	if (i <= n && (n % i == 0 && (i != 1 || i != n)))
	{
		return (0);
	}
	else
	{
		i += 1;
		return (1);
	}
}
