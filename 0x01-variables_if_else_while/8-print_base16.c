#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int lower;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (lower = 97; lower < 103; lower++)
	{
		putchar(lower);
	}
	putchar(10);
	return (0);
}
