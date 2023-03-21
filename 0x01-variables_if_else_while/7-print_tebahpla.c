#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 */
int main(void)
{
	int lower;

	for (lower < 123; lower > 96; lower--)
	{
		putchar(lower);
	}
	putchar(10);
	return (0);
}
