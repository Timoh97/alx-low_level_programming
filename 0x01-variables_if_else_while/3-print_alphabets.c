#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 */
int main(void)
{
	int upper;
	int lower;
/* use ASCII TABLE*/
	for (lower = 97; lower <= 122; lower++)
	{
		putchar(lower);
	}
	for (upper = 65; upper <= 90; upper++)
	{
		putchar(upper);
	}
	putchar(10);
	return (0);
}
