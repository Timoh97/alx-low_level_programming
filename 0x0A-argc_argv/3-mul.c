#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 *
 * @argc: number of arguments.
 * @argv: pointer to string arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int mul;
	int a;
	int b;
	char *p;
	char *t;
	long conv1;
	long conv2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	conv1 = strtol(argv[1], &p, 10);
	conv2 = strtol(argv[2], &t, 10);
	a = conv1;
	b = conv2;
	mul = (a) * (b);
	printf("%d\n", mul);
	return (0);
}
