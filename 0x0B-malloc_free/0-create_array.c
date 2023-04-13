#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: initializing char.
 * Return: pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(*array) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		*array = c;
	}
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
