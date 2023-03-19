#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 */
int main(void)
{
	int lower;

	for (lower = 97; lower < 123; lower++)
	{
		if (lower != 101 && lower != 113)
		{
			putchar(lower);
		}
	}
	putchar(10);
	return (0);
}
