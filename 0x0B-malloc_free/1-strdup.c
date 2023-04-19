#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to string.
 * Return: pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *array;
	int k;
	int l = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	k = strlen(str);
	array = malloc((sizeof(char) * k) + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	while (l < k)
	{
		array[l] = stray[l];
		l++;
	}
	return (array);
}
