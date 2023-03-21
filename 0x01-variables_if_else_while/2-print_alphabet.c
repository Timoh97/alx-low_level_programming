#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 */
int main(void)
{
	int alphabet;
/* Use ASCII TABLE to read alphabet values */
	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		putchar(alphabet);
	}
	putchar(10);
	return (0);
}
