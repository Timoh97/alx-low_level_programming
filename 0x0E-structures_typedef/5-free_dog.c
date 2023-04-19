#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @dg: pointer to dog to free
 *
 * Return: void
 */
void free_dog(dog_t *dg)
{
	if (dg)
	{
		free(dg->name);
		free(dg->owner);
		free(dg);
	}
}
