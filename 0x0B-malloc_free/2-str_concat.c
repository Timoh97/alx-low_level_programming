#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat- concatenates two strings.
 * @s1: destination string.
 * @s2: string concatenated to s1.
 * Return: pointer containing contents of s1.
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	result = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	while (*s1)
	{
		result[k] = *s1;
		s1++;
		k++;
	}
	while (*s2)
	{
		result[k] = *s2;
		s2++;
		k++;
	}
	result[k] = '\0';
	return (result);
}
