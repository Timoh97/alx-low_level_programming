#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 */
int main(void)
{
	int small;

	for (small = 97; small < 123; small++)
	{
		putchar(small);
	}
	putchar(10);
	return (0);
}
