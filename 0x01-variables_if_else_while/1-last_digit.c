#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 */
int main(vioid)
{	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	if (num > 5)
		printf("Last digit of %i is %i and is greater than 5", n);
	else if (num == 0)
		printf("Last digitof %i is %i and is 0", n);
	else if (num < 6 && num !=0)
		printf("Last digit of n is %i is %i and is less than 6 and not 0\n", n);
	return (0);
}
