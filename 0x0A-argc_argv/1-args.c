#include <stdio.h>

/**
 * main - prints number of arguments passed.
 *
 * @argc: number of arguments.
 * @argv: pointer to string arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argv)
	{
		while (i < argc)
		{
			i += 1;
		}
		printf("%d\n", i - 1);
	}
	return (0);
}
