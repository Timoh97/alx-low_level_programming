#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int i;

	for (n = 48; n < 58; n++)
	{
		for (i = n + 1; i < 58; i++)
		{
			putchar(n);
			putchar(i);
			if (n == 56 && i == 57)
			{
			}
			else
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
