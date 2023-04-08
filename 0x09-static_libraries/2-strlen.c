#include "main.h"

/**
 * _strlen - length of string
 *
 * @s: string to calculate length
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
