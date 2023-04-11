#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: number of arguments.
 * @argv: pointer to string arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i = i + 1;
		}
	}
	return (0);
}
