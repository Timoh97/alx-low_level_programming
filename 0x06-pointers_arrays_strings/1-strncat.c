#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: string to be appended to
 * @src: string to be appended to dest
 * @n: No of bytes from src to be appended to dest
 *
 * Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
