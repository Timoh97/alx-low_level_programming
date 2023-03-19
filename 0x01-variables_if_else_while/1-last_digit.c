#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -main code block
 * Description: assign a random number to the variable n
 * each time it is executed
 * Return:0
 */
int main(void)

{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lnum = n % 10;

	if (lnum > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lnum);
	else if (lnum == 0)
		printf("Last digit of %i is %i and is 0\n", n, lnum);
	else if (lnum < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lnum);

	return (0);

}
