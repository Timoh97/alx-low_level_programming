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
		for (i = 49; i < 58; i++)
		{
			putchar(n);
			putchar(n);				
			putchar(32);
			putchar(n);
			putchar(i);  
			if (n == 57 && i == 57)
			{
			}
			else
			{
				putchar(32);
				putchar(44);
			}
		}
	}
	putchar(10);
	return (0);
}
