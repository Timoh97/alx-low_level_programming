#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @dg: pointer to structure
 *
 * Return: void
 */
void print_dog(struct dog *dg)
{
	if (dg != NULL)
	{
		if (dg->name != NULL)
			printf("Name: %s\n", dg->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", dg->age);
		if (dg->owner != NULL)
			printf("Owner: %s\n", dg->owner);
		else
			printf("Owner: (nil)\n");
	}
}
