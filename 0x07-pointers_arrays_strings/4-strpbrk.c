#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int index;

		while (*s)
		{
			for (index = 0; accept[index]; index++)
			{
			if (*s == accept[index])
			return (s);
			}
		s++;
		}

	return ('\0');
}
