#include "main.h"
#include <stdio.h>

/**
 * _strchr- locates a character in a string.
 *@s: pointer to the string being searched.
 *@c: character to be located.
 *Return: a pointer to the first occurence of c or NULL if c is not found.
 */


char *_strchr(char *s, char c)
{
	if (*s == c)
	{
		return (s);
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
