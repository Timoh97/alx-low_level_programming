#include <stdio.h>

/**
 * main - prints program's name.
 *
 * @argc: number of arguments.
 * @argv: pointer to string arguments
 * Return: int
 */
 int main(int argc, char *argv[])
{
	if (argc)

		printf("%s\n", argv[0]);

	return (0);
}
