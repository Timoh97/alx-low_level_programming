#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int lnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lnum = n % 10;
	if (lnum == 0)
		printf("Last digit of %d is %d and is 0\n", n, lnum);
	else if (lnum > 5)
	        printf("Last digit of %dis %d and is greater than 5\n", n, lnum);
	else if (lnum != 0 && lnum < 6)
		printf("Last digit of %d is %d and is than 6 and is not 0\n", n, lnum);
	return (0);
}
