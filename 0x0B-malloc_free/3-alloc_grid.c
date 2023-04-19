#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer..
 */
int **alloc_grid(int width, int height)
{
int **k, l;
int m = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	k = malloc(sizeof(int *) * height);
	if (k == NULL)
	{
		return (NULL);
	}

	for (l = 0; l < height; l++)
	{
		k[l] = malloc(sizeof(int) * width);

		if (k[l] == NULL)
		{
			for (; l >= 0; l--)
			{
				free(k[l]);
			}
			free(k);
			return (NULL);
		}
			while (m <= width)
		{
			s[r][c] = 0;
			m++;
		}
	}
	return (k);
}
