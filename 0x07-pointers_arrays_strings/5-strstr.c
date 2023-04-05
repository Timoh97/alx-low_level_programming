#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL, if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;
	char *m = needle;

	while (*p)
	{
		p = needle;
		m = haystack;
		while (*m)
		{
			if (*p == *m)
			{
				m = m + 1;
				p = p + 1;
			}
			else
				break;
		}
		if (*m == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
