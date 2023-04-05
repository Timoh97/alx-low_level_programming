#include "main.h"

/**
 * _memcpy- changes all lowercase letters of a string to uppercase.
 *@dest: pointer to the block of memory where content is to be copied.
 *@src: pointer to the block of memory where content to be copied is.
 *@n: number of bytes to be copied.
 *Return: a pointer to the block of memory filled.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
